/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:39 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/24 14:12:20 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (str[i] < 32 || str[i] > 126)
			sol = 1;
		i++;
	}
	return (sol);
}
