/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:21:40 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 14:14:00 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int	ft_atoi(char *str);

void ft_putnbr_base(int nbr, char *base);

//EJERCICIO 04

int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	int		n = 8556963;

	ft_putnbr_base(n, base);
	return (0);
}

//EJERCICIO 03
/*
int	main(void)
{
	char	str[] = " ---+--+1234ab567";

	printf("%d", ft_atoi(str));
	return (0);
}
*/
/*
//EJERCICIO 02

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
//EJERCICIO 01
/*
int	main(void)
{
	char	str[] = "hola qué tal?";

	ft_putstr(str);
	return (0);
}
*/
//EJERCICIO 00
/*
int	main(void)
{
	char	str[] = "hola que tal?";

	printf("%d", ft_strlen(str));
	return (0);
}
*/
