/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:36:20 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/25 18:06:35 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size < 1)
		return (srclen);
	destlen = 0;
	while (dest[destlen])
		destlen++;
	if (size <= destlen)
		return (size + srclen);
	j = 0;
	while (src[j] && (j < size - destlen - 1))
	{
		dest[destlen + j] = src[j];
		j++;
	}
	dest[destlen + j] = '\0';
	return (destlen + srclen);
}

char	*ft_strjoin_to_end(char const *s1, char const *s2)
{
	int		len1;
	int		len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len1 = 0;
	while (s1[len1])
		len1++;
	len = 0;
	while (s2[len])
		len++;
	len += len1;
	join = malloc((len + 1) * sizeof(char));
	if ((len + 1) == 0)
		return (join);
	if (join == NULL)
		return (NULL);
	ft_memset(join, '\0', (len + 1) * sizeof(char));
	ft_strlcat(join, s1, len1 + 1);
	ft_strlcat(join, s2, len + 1);
	return (join);
}
