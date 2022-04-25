/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:16:56 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/20 19:05:17 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	sol;

	sol = write(1, "0x", 2);
	sol += ft_putnbr_unsig((unsigned long)p, 16);
	return (sol);
}
