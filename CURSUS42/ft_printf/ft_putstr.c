/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:13:50 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/29 16:50:10 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	sol;

	sol = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		sol += ft_putchr(*s);
		s++;
	}
	return (sol);
}
