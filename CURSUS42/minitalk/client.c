/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/06/24 21:12:51 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/libft.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void	send_char(int pid, int c)
/*
	Se envía al PID el carácter c pasándolo a binario y usando las señales
	SIGUR2 (1) y SIGUR (0).
	Parámetros: PID del servidor y char a enviar.
*/
{
	unsigned char	b;
	int				i;

	i = 1;
	b = 128;
	while (i < 9)
	{
		if (b & c)
		{
			kill(pid, SIGUSR2);
			printf("1");
		}
		else
		{
			kill(pid, SIGUSR1);
			printf("0");
		}
		b /= 2;
		i++;
	}
	return (0);
}
/*
void	char_to_bin(int pid, char c)
{
	int	n;
	int	b;

	n = c;
	printf("c: %c is n: %d\n", c, n);
	while (n != 0)
	{
		b = n % 2;
		printf("b: %i\n", b);
		send_signal(pid, b);
		n = n / 2;
		usleep(1);
	}
	return (0);
}
*/
int	main(int argc, char **argv)
/*
	El cliente debe comunicar la string pasada como parámetro al servidor.
	Parámetros: PID del servidor y string a enviar.
*/
{
	int	i;
	int	c;
	int	pid;

	i = 0;
	pid = atoi(argv[1]);
	while (argv[2][i])
	{
		c = argv[2][i];
		char_to_bin(pid, c);
		i++;
	}
	return (0);
}
