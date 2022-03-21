/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:12:37 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 20:27:21 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	if (size < 1)
		return (ft_strlen(src) + size);
	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (src[k] != '\0' && k < size - 1)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(dest) + ft_strlen(src));
}
