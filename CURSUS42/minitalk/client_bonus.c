/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/11/04 21:41:50 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

revisar que está con solo 3 argumentos 
#include "minitalk.h"

void	send_char(int pid, int c)
/*
	Se envía al PID el carácter c pasándolo a binario y usando las señales
	SIGUR2 (1) y SIGUR1 (0).
	Parámetros: PID del servidor y char a enviar.
*/
{
	int	i;
	int	j;

	i = 7;
	while (i >= 0)
	{
		if (c & (1 << i))
			j = kill(pid, SIGUSR2);
		else
			j = kill(pid, SIGUSR1);
		usleep(300);
		i--;
		if (j != 0)
		{
			ft_putstr_fd("Signal error.\n", 1);
			exit(1);
		}
	}
}

void	received_reception(int signal, siginfo_t *info, void *context)
{
	(void)info;
	if (signal == SIGUSR2)
	{
		ft_putstr_fd("Server has received the message.\n", 1);
	}
	context = NULL;
}

int	main(int argc, char **argv)
/*
	El cliente debe comunicar la string pasada como parámetro al servidor.
	Parámetros: PID del servidor y string a enviar.
*/
{
	int					i;
	int					pid;
	struct sigaction	sa;

	if (argc != 3)
		ft_putstr_fd("Wrong number of arguments\n", 1);
	else
	{
		sa.sa_sigaction = received_reception;
		sa.sa_flags = SA_SIGINFO;
		sigemptyset(&sa.sa_mask);
		sigaction(SIGUSR2, &sa, NULL);
		pid = ft_atoi(argv[1]);
		i = 0;
		while (argv[2][i])
		{
			send_char(pid, argv[2][i]);
			i++;
		}
		send_char(pid, '\0');
	}
	return (0);
}




//int	main(int argc, char **argv)
///*
//	El cliente debe comunicar la string pasada como parámetro al servidor.
//	Parámetros: PID del servidor y string a enviar.
//*/
//{
//	int	i;
//	int	pid;
//
//	if (argc != 3)
//		ft_putstr_fd("Wrong number of arguments\n", 1);
//	else
//	{
//		g_received = 0;
//		pid = ft_atoi(argv[1]);
//		i = 0;
//		while (argv[2][i])
//		{
//			send_char(pid, argv[2][i]);
//			i++;
//		}
//		ft_putnbr_fd((int)getpid(), 1);
//		send_char(pid, '\0');
//		ft_putchar_fd('B', 1);
//	}
//	sleep(1);
//	signal(SIGUSR2, message_reception);
//	pause();
//	return (0);
//}
