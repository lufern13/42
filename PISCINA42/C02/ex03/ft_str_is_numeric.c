/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:39:27 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/28 19:13:29 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	sol;

	sol = 1;
	i = 0;
	while (*(str + i) != '\0' && sol == 1)
	{
		if (str[i] < 48 || str[i] > 57)
			sol = 0;
		i++;
	}
	return (sol);
}