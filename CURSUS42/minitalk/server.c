/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:30 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/25 12:14:04 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*bits = NULL;

int	print_char(char *ascii_bin)
/*
	Devuelve por pantalla el carácter ascii recibido en binario
*/
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (i < 8)
	{
		c = c * 2 + ascii_bin[i] - 48;
		i++;
	}
	ft_putchar_fd(c, 1);
	return (0);
}

void	bits_append(char *bits, char c)
/*
	Añade al final de bits el carácter c.
*/
{
	int	i;

	i = 0;
	if (!bits)
	{
		bits[0] = c;
		i = 10;
	}
	if (i == 0)
	{
		while (bits[i] == '0' || bits[i] == '1')
			i++;
		bits[i] = c;
	}
}

void	message_reception(int signal)
{
	if (!bits)
	{
		bits = ft_calloc(9, 1);
		if (!bits)
			free(bits);
	}
	if (signal == SIGUSR1)
		bits_append(bits, '0');
	else
		bits_append(bits, '1');
	if ((int)ft_strlen(bits) == 8)
	{
		print_char(bits);
		free(bits);
		bits = NULL;
	}
}

int	main(void)
/*
	El servidor debe lanzarse primero, tras lanzarse debe mostrar su PID.
	Una vez la string se haya recibido, el servidor debe mostrarla.
	Parámetros: string que mostrar.
*/
{
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd((int)getpid(), 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		signal(SIGUSR1, message_reception);
		signal(SIGUSR2, message_reception);
		usleep(2500);
	}
	return (0);
}

//http://www.lsi.us.es/cursos/seminario-1.html#11