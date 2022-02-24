/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:54:00 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 19:45:40 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	may;

	i = 0;
	may = 1;
	while (str[i] != '\0')
	{
		if (may == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (may == 0 && (str[i] < 'A' || str[i] > 'z'))
			may = 1;
		else if (may == 0 && (str[i] > 'Z' && str[i] < 'a'))
			may = 1;
		else if (may == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			may = 0;
		}			
		i++;
	}
	return (str);
}
