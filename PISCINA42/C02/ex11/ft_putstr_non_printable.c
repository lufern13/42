/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:14:05 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/28 15:26:51 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ascii_hex(char ascii)
{
	if (ascii < 16)
		write(1, "0", 1);
	else
	{
		write(1, "1", 1);
		ascii = ascii - 16;
	}
	if (ascii > 9 && ascii < 16)
		ascii = ascii - 10 + 'a';
	else
		ascii = ascii + '0';
	return (ascii);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	ascii;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			ascii = ascii_hex(str[i]);
			write(1, &ascii, sizeof(ascii));
		}
		else if (str[i] == 127)
			write(1, "\\7f", 3);
		else
			write(1, &str[i], 1);
		i++;
	}
}
