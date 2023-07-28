/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:30 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/28 17:11:04 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*g_bits = NULL;

int	char_to_message(char *ascii_bin)
/*
	Devuelve por pantalla el carácter ascii recibido en binario
*/
{
	int			i;
	int			c;
	char		*chr;
	static char	*g_message;

	c = 0;
	i = 0;
	while (i < 8)
	{
		c = c * 2 + ascii_bin[i] - 48;
		i++;
	}
	chr = ft_calloc(2, 1);
	chr[0] = c;
	if (!g_message)
		g_message = NULL;
	g_message = ft_strjoin(g_message, chr);
	if (c == '\0')
	{
		ft_putstr_fd(g_message, 1);
		ft_putchar_fd('\n', 1);
		free(g_message);
		g_message = NULL;
	}
	return (0);
}

void	bits_append(char *g_bits, char c)
/*
	Añade al final de bits el carácter c.
*/
{
	int			i;

	if (!g_bits)
		g_bits[0] = c;
	else
	{
		i = 0;
		while (g_bits[i] == '0' || g_bits[i] == '1')
			i++;
		g_bits[i] = c;
	}
}

void	message_reception(int signal)
{
	if (!g_bits)
	{
		g_bits = ft_calloc(9, 1);
		if (!g_bits)
			free(g_bits);
	}
	if (signal == SIGUSR1)
		bits_append(g_bits, '0');
	else
		bits_append(g_bits, '1');
	if ((int)ft_strlen(g_bits) == 8)
	{
		char_to_message(g_bits);
		free(g_bits);
		g_bits = NULL;
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
		//usleep(2500);
	}
	return (0);
}

//http://www.lsi.us.es/cursos/seminario-1.html#11