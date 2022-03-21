/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:51:29 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/28 20:56:30 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	sol;

	i = 0;
	sol = 1;
	while (*(str + i) != '\0' && sol == 1)
	{
		if (str[i] < 'A' || str[i] > 'z')
			sol = 0;
		else if (str[i] > 'Z' && str[i] < 'a')
			sol = 0;
		i++;
	}
	return (sol);
}
