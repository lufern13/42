/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:05:53 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/18 14:27:17 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_swap(int *a, int *b);

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_putstr(char *str);

int	main(void)
{
	char	*strptr;
	char	str[3];

	str[0] = 'h';
	str[1] = 'o';
	strptr = &str[0];
	ft_putstr(strptr);
	return (0);
}
/*
int	main(void)
{
	int	*aptr;
	int	a;
	int	*bptr;
	int	b;

	a = 49;
	b = 6;
	aptr = &a;
	bptr = &b;
	printf("%d %d\n", a, b);
	ft_ultimate_div_mod(aptr, bptr);
	printf("%d %d", a, b);
	return (0);
}
*/
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*div;
	int	*mod;

	a = 49;
	b = 6;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
	printf("%d  %d  %d  %d", a, b, *div, *mod);
	return (0);
}
*/
/*
int	main(void)
{
	int	*aptr;
	int	*bptr;
	int	a;
	int b;

	aptr = &a;
	bptr = &b;
	a = 2;
	b = 3;

	printf("%d %d\n", *aptr, *bptr);
	ft_swap(aptr, bptr);
	printf("%d %d", *aptr, *bptr);
	return (0);
}
*/
/*
int	main(void)
{
	int	a;
	int *********p8;
	int ********p7;
	int *******p6;
	int ******p5;
	int *****p4;
	int ****p3;
	int ***p2;
	int **p1;
	int *p;

	a = 2;
	p = &a;
	p1 = &p;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	ft_ultimate_ft(p8);
	printf("%d %d", a,*********p8);
	return (0);
}
*/

//*ptr contenido
//ptr dirección de memoria
