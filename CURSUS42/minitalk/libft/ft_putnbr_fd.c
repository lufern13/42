/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:28:14 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/12 17:35:28 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_long_int(long int n, int fd)
{
	char	cifra;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	if (n < 10)
	{
		cifra = n + '0';
		write(fd, &cifra, 1);
	}
	else
	{
		put_long_int(n / 10, fd);
		put_long_int(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
/*
	Envía el número ’n’ al file descriptor dado.
*/
{
	long int	number;

	number = n;
	put_long_int(number, fd);
}
