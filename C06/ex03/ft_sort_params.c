/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:49:05 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 21:40:41 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_params(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	valor;

	valor = *a;
	*a = *b;
	*b = valor;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		k;
	char	*c;

	i = 1;
	k = 0;
	while (i <= argc - k - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			c = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = c;
		}
		i++;
		if (i == argc - k - 1)
		{
			i = 1;
			k++;
		}
	}
	ft_write_params(argc, argv);
	return (0);
}
