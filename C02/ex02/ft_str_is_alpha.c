/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:51:29 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 13:49:35 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	sol;

	i = 0;
	if (str[0] == '\0')
		sol = 1;
	else
		sol = 0;
	while (*(str + i) != '\0' && sol == 0)
	{
		if (str[i] < '0' || str[i] > 'z')
			sol = 1;
		else if (str[i] > '9' && str[i] < 'A')
			sol = 1;
		else if (str[i] > 'Z' && str[i] < 'a')
			sol = 1;
		i++;
	}
	return (sol);
}
