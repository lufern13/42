/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:54:00 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/28 20:37:13 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-' )
				str[i] = str[i] - 32;
			else if (str[i - 1] == '\n' || str[i - 1] == '	')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
