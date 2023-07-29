/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:30 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/29 15:05:22 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*g_bits;

void	show_message(char *message, int client_pid)
{
	ft_putstr_fd(message, 1);
	ft_putchar_fd('\n', 1);
	kill(client_pid, SIGUSR1);
}

int	char_to_message(char *ascii_bin, int client_pid)
/*
	Devuelve por pantalla el carácter ascii recibido en binario
*/
{
	int			i;
	int			c;
	char		*chr;
	static char	*message;

	c = 0;
	i = 0;
	while (i < 8)
	{
		c = c * 2 + ascii_bin[i] - 48;
		i++;
	}
	chr = ft_calloc(2, 1);
	chr[0] = c;
	message = ft_strjoin(message, chr);
	if (c == '\0')
	{
		ft_putstr_fd(message, 1);
		ft_putchar_fd('\n', 1);
		kill(client_pid, SIGUSR1);
		free(message);
		message = NULL;
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

void	message_reception(int signal, siginfo_t *info, void *context)
/*
	Manejador de señales.
	Se añade un 0 o un 1 según la señal recibida a la variable global g_bits, que
	almacena los 8 bits necesarios para cada carácter. Cuando ya tiene los 8, se
	añade el carácter al mensaje mediante char_to_message.
	Además,se obtiene el PID del que ha enviado el mensaje.
*/
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
		char_to_message(g_bits, info->si_pid);
		free(g_bits);
		g_bits = NULL;
	}
	context = NULL;
}

int	main(void)
/*
	El servidor debe lanzarse primero, tras lanzarse debe mostrar su PID.
	Una vez la string se haya recibido, el servidor debe mostrarla.
*/
{
	struct sigaction	sa;

	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd((int)getpid(), 1);
	ft_putchar_fd('\n', 1);
	sa.sa_sigaction = message_reception;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	while (1)
	{
		sigaction(SIGUSR2, &sa, NULL);
		sigaction(SIGUSR1, &sa, NULL);
		pause();
	}
	return (0);
}
