/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:52:02 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 13:57:43 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (str[i] < 97 || str[i] > 122)
			sol = 1;
		i++;
	}
	return (sol);
}