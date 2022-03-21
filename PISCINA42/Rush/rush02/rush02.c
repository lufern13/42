/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:20:46 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/26 23:13:07 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	write_triplet(char *dic, char cent, char dec, char uni);

void	write_million(char *dic, char million);

void	rush02(char *dic, char *str)
{
	int		i;
	int		len;
	char	w_million;

	len = ft_strlen(str);
	i = len % 3;
	if (i == 2)
		write_triplet(dic, '0', str[0], str[1]);
	else if (i == 1)
		write_triplet(dic, '0', '0', str[0]);
	if (i == 0)
		w_million = len - 3;
	else
		w_million = len - i;
	while (str[i] != '\0')
	{
		write_triplet(dic, str[i], str[i + 1], str[i + 2]);
		write_million(dic, w_million);
		if (i + 3 == len - 1)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i = i + 3;
		w_million = w_million - 3;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2 && argc > 3)
		write(2, "Error\n", sizeof("Error\n"));
	else if (argc == 2 && valid_input(argv[1]))
		rush02("numbers.dict", argv[1]);
	else if (argc == 3 && valid_input(argv[2]))
		rush02(argv[1], argv[2]);
	else
		write(2, "Error\n", sizeof("Error\n"));
	return (0);
}