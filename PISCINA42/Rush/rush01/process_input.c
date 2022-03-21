/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 07:59:16 by pedromar          #+#    #+#             */
/*   Updated: 2022/02/20 19:31:45 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*process_input(int size, char *argv)
{
	int	*input;
	int	i;
	int	k;

	i = 0;
	k = 0;
	input = malloc(sizeof(int *) * 4 * size);
	while (i < (size * 8) - 1)
	{
		if (i % 2 == 0)
		{
			*(input + k) = *(argv + i) - '0';
			k++;
		}
		i++;
	}
	return (input);
}
