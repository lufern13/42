/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:26:24 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 20:35:56 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int ft_strncmp(char *s1, char *s2, unsigned int n);

char *ft_strcat(char *dest, char *src);

char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strstr(char *str, char *to_find);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

//EJERCICIO 05

int	main(void) { 
	unsigned int	size;
	char			dest[6];
	char			src[4];
	char			dest1[6]; 

	dest[0] = 'h';
	dest[1] = 'o';
	dest[2] = 'l';
	dest[3] = 'a';
	dest[4] = 's';
	dest[5] = '\0';
	dest1[0] = 'h';
	dest1[1] = 'o';
	dest1[2] = 'l';
	dest1[3] = 'a';
	dest1[4] = 's';
	dest1[5] = '\0';
	src[0] = '1';
	src[1] = '2';
	src[2] = '3';
	src[3] = '\0';
	size = 2;
	printf("%lu\n", strlcat(dest1, src, size));
	printf("%u", ft_strlcat(dest, src, size));
}

//EJERCICIO 04
/*
int	main(void)
{
	char	str[] = "holalas"; 
	char	str1[] = "holalas"; 
	char	find[] = "las";

	printf("%s\n", strstr(str1, find));
	printf("%s\n", ft_strstr(str, find));
}
*/
//EJERCICIO 03
/*
int	main(void)
{
	char	s1[10] = "45";
	char	s11[10] = "45";
	char	s2[10] = "";

	printf("%s\n", strncat(s11, s2, 3));
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
