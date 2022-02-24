/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:05:53 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/23 16:20:51 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_swap(int *a, int *b);

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

void	ft_rev_int_tab(int *str, int size);

void	ft_sort_int_tab(int *tab, int size);

void	imprime_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", *(tab + i));
		i++;
	}
}

int	main(void)
{
	int	tab[5];
	int	size;

	size = 5;
	tab[0] = 0;
	tab[1] = 3;
	tab[2] = -1;
	tab[3] = 9;
	tab[4] = -9;
	ft_sort_int_tab(tab, size);
	imprime_tab(tab, size);
	return (0);
}

/*
int	main(void)
{
	int	tab[2];
	int	size;

	size = 2;
	tab[0] = 1;
	tab[1] = 2;
	ft_rev_int_tab(tab, size);
	imprime_tab(tab);
	return (0);
}
*/
/*
int	main(void)
{
	char	str[4];

	str[0] = 'h';
	str[1] = 'o';
	str[2] = 'l';
	printf("%d\n", ft_strlen(str));
	return (0);
}
*/
/*
int	main(void)
{
	char	str[3];

	str[0] = 'h';
	str[1] = 'o';
	ft_putstr(str);
	return (0);
}
*/
/*
{
	char	str[3];

	str[0] = 'h';
	str[1] = 'o';
	ft_putstr(str);
	return (0);
}
*/
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
