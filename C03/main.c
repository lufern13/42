/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:26:24 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/01 21:16:59 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int ft_strncmp(char *s1, char *s2, unsigned int n);

char *ft_strcat(char *dest, char *src);

char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strstr(char *str, char *to_find);

//EJERCICIO 04

int	main(void)
{
	char	str[] = "homarmas";
	char	find[] = "mas";

	//printf("%s\n", strstr(str, find));
	printf("%s\n", ft_strstr(str, find));
}

//EJERCICIO 03
/*
int	main(void)
{
	char	s1[10] = "hola";
	char	s2[10] = "123";

	//printf("%s\n", strncat(s1, s2, 3));
	printf("%s\n", ft_strncat(s1, s2, 3));
}
*/
//EJERCICIO 02
/*
int	main(void)
{
	char	s1[10] = "hola";
	char	s2[10] = "12";

	//printf("%s\n", strcat(s1, s2));
	printf("%s\n", ft_strcat(s1, s2));
}
*/
//EJERCICIO 01
/*
int	main(void)
{
	char	*s1 = "hola";
	char	*s2 = "ho";

	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s2, 3));

}
*/
//EJERCICIO 00
/*
int	main(void)
{
	char	*s1 = "hola";
	char	*s2 = "ho";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
*/
