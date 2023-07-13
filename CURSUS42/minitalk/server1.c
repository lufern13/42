/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:21:15 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/13 14:24:05 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	message_reception(int signal)
{
	if (signal == SIGUSR1)
		ft_putnbr_fd(0, 1);
	else
		ft_putnbr_fd(1, 1);
}

int	main(void)
{
	char	*bits;

	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd((int)getpid(), 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		signal(SIGUSR1, message_reception);
		sleep(1);
		signal(SIGUSR2, message_reception);
		sleep(1);
	}
	return (0);
}
