/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:49:08 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/28 20:49:22 by lucifern         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = ft_strlen(src);
	while (i < size - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (*(dest + i) != '\0')
	{
		*(dest + i) = '\0';
		i++;
	}
	return (len);
}
