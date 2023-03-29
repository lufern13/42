/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:18:43 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/29 16:55:41 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	sol;

	sol = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		sol += ft_putchr_fd(*s, 1);
		s++;
	}
	return (sol);
}
