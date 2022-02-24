/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:49:08 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 20:21:36 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (i < size - 1)
	{
		*(dest + i) = *(src + i);
		len++;
		i++;
	}
	while (*(dest + i) != '\0')
	{
		*(dest + i) = '\0';
		if (*(dest + i) != '\0')
			len++;
		i++;
	}
	while (*(src + i) != '\0')
	{
		len++;
		i++;
	}
	return (len - 1);
}
