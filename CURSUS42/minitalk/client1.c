/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:20:17 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/13 14:15:40 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int	pid;

	pid = atoi(argv[1]);
	if (*argv[2] == '1')
		kill(pid, SIGUSR2);
	else if (*argv[2] == '0')
		kill(pid, SIGUSR1);
	else
		printf("MAL");
	return (0);
}
