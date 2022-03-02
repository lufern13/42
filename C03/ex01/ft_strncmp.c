/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:35:36 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/01 18:41:43 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				sol;

	i = 0;
	sol = 0;
	while (i < n && sol == 0)
	{
		if (s1[i] != s2[i])
			sol = s1[i] - s2[i];
		i++;
	}
	return (sol);
}
