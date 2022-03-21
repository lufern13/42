/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 07:59:16 by pedromar          #+#    #+#             */
/*   Updated: 2022/02/20 19:30:43 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	possible_solution(int size, int	*input)
{
	int	i;
	int	ones;
	int	max_vals;

	ones = 0;
	max_vals = 0;
	i = 0;
	while (i < (size * 4))
	{
		if (*(input + i) == 1)
			ones ++;
		else if (*(input + i) == size)
			max_vals++;
		if ((i + 1) % 4 == 0)
		{
			if (ones != 1 || (max_vals != 0 && max_vals != 1))
				return (-1);
			ones = 0;
			max_vals = 0;
		}
		i++;
	}
	return (0);
}
