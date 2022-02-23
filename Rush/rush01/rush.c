/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 07:59:16 by pedromar          #+#    #+#             */
/*   Updated: 2022/02/20 19:32:13 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		valid_input(int n, char	*c);
int		*process_input(int size, char	*argv);
int		possible_solution(int size, int	*input);
void	find_solution(int	*input);

int	main(int argc, char *argv[])
{
	int	*inputs;
	int	size;

	size = valid_input(argc, argv[1]);
	if (size == -1)
	{
		write(2, "Error\n", sizeof("Error\n"));
		return (1);
	}
	inputs = process_input(size, argv[1]);
	if (possible_solution(size, inputs) == -1)
	{
		write(2, "Error\n", sizeof("Error\n"));
		return (1);
	}
	else if
		find_solution(inputs);
	return (0);
}
