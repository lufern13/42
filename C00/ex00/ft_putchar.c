/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:38:57 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/15 11:45:04 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	char	c;

	c = 'a';
	ft_putchar(c);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
