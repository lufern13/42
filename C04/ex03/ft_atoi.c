/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:21:11 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/01 21:22:25 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sol;
	int	menos;

	i = 0;
	sol = 0;
	menos = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '	' || str[i] == '\v')
	{
		if (str[i] == '-')
			menos++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sol = (sol * 10) + (str[i] - '0');
		i++;
	}
	if (menos % 2 == 1)
		sol = -sol;
	return (sol);
}
