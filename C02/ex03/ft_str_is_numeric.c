/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:39:27 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 13:50:48 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if (str[i] < 48 || str[i] > 57)
			sol = 1;
		i++;
	}
	return (sol);
}
