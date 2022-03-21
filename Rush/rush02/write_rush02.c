/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_rush02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:23:36 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/26 23:12:52 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	write_dic(char *dic, int len, char *number)
	//esta función debe escribir el string correspondiente al número number en 
	//el diccionario. Debe dar "Dict error\n" si no encuentra el número

	//reservamos un espacio de memoria (malloc) para el diccionario

void	write_triplet(char *dic, char cent, char dec, char uni) //SOBRA UNA LINEA
{
	char	s[3];

	s[2] = '\0';
	if (cent != '0')
	{
		write_dic(dic, 1, &cent);
		write_dic(dic, 3, "100");
	}
	if (dec != '0')
	{
		s[0] = dec;
		if (dec == '1')
		{
			s[1] = uni;
			write_dic(dic, 2, s);
		}
		else
		{
			s[1] = '0';
			write_dic(dic, 2, s);
		}
	}
	if (dec != '1' && uni != '0')
	{
		write_dic(dic, 1, &uni);
	}
}

void	write_million(char *dic, int k)
{
	char	*million;
	int		i;

	million = malloc(k + 1);
	million[0] = '1';
	i = 1;
	while (i <= k)
	{
		million[i] = '0';
		i++;
	}
	if (k > 1)
		write_dic(dic, k + 1, million);
	free(million);
}
