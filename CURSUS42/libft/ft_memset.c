/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:17:10 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/22 19:01:46 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <string.h>
int main () {
   char str[17];

   strcpy(str,"This is string.h");
   ft_memset(str,'$',4);
   printf("%s", str);
   return(0);
}
*/