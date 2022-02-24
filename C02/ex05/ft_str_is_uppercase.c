/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:20 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 14:06:21 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	sol;

	if (str[0] == '\0')
		sol = 1;
	else
		sol = 0;
	i = 0;
	while (*(str + i) != '\0' && sol == 0)
	{
		if (str[i] < 65 || str[i] > 90)
			sol = 1;
		i++;
	}
	return (sol);
}
