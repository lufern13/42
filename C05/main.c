/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:39:56 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 22:10:38 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int ft_recursive_factorial(int nb);

int	ft_iterative_power(int nb, int power);

int ft_recursive_power(int nb, int power);

int	ft_fibonacci(int index);

int	ft_sqrt(int nb);

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb);

//EJERCICIO 07

int	main(void)
{
	printf("%d", ft_find_next_prime(20));
	return (0);
}

//EJERCICIO 06
/*
int	main(void)
{
	printf("%d", ft_is_prime(13));
	return (0);
}
*/
//EJERCICIO 05
/*
int	main(void)
{
	printf("%d", ft_sqrt(9));
	return (0);
}
*/
//EJERCICIO 04
/*
int main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}
*/
//EJERCICIO 03
/*
int	main(void)
{
	printf("%d", ft_recursive_power(-2, 3));
	return (0);
}
*/
//EJERCICIO 02
/*
int	main(void)
{
	printf("%d", ft_iterative_power(-2, 3));
	return (0);
}
*/
//EJERCICIO 01
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(-5));
	return (0);
}
*/
//EJERCICIO 00
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial('*'));
	return (0);
}
*/
