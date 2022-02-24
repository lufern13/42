/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:24:39 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 20:51:54 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	ft_str_is_alpha(char *str);

int	ft_str_is_numeric(char *str);

int	ft_str_is_lowercase(char *str);

int	ft_str_is_uppercase(char *str);

int	ft_str_is_printable(char *str);

char	*ft_struppercase(char *str);

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

//EJERCICIO 10
/*
int	main(void)
{
	char			dest[] = "hola";
	char			src[] = "012";
	unsigned int	size;
	
	size = 3;
	printf("%lu %s", strlcpy(dest, src, size), dest);
	return (0);
}
*/
//EJERCICIO 09
/*
int	main(void)
{
	char	str[] = "salut, cOmment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
//EJERCICIO 08
/*
int	main(void)
{
	char	str[] = "HOLA que TAL?*-+";

	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
//EJERCICIO 07
/*
int	main(void)
{
	char	str[] = "hola que tal?";

	printf("%s", ft_struppercase(str));
	return (0);
}
*/
//EJERCICIO 06
/*
int	main(void)
{
	char	str[] = "hadhf";

	printf("%d", ft_str_is_printable(str));
	return (0);
}
*/
//EJERCICIO 05
/*
int	main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
*/
//EJERCICIO 04
/*
int	main(void)
{
	char	str[] = "adfasd*";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
*/
//EJERCICIO 03
/*
int	main(void)
{
	char	str[] = "1255i*";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
*/
/*
//EJERCICIO 02

int	main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
*/
//EJERCICIO 01
/*
int	main(void)
{
	char			dest[] = "holaa";
	char			src[] = "012";
	unsigned int	n;

	n = 2;
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}
*/
//EJERCICIO 00
/*
int	main(void)
{
	char	dest[] = "holaaaaaaa";
	char	src[] = "012";

	//printf(" %s\n", strcpy(dest, src));
	printf(" %s\n", ft_strcpy(dest, src));
	return (0);
}
*/
