/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:18:47 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/22 19:29:43 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	return (len - 1);
}
int    main(void)
{
    char    str[4];

    str[0] = 'h';
    str[1] = 'o';
    str[2] = 'l';
    str[3] = 'a';
    printf("%d\n", ft_strlen(str));
    return (0);
}
