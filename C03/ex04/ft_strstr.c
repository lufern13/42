/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:48:50 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/01 21:06:27 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>
char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;
	int	sol;

	i = 0;
	j = 0;
	sol = 0;
	len = ft_strlen(to_find);
	while (str[i] != '\0' && sol == 0)
	{
		if (str[i] == to_find[j])
		{
			while (j < len && 
		}
		i++;
	}
	return (sol);
}
