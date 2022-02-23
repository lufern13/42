/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:01:12 by pedromar          #+#    #+#             */
/*   Updated: 2022/02/20 08:01:19 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int	*a,	int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	permutation(int *arr, int start, int end)
{
	int	i;

	i = start;
	if (start == end)
	{
		return (arr);
	}
	while (i <= end)
	{
		i++;
		swap((arr + i), (arr + start));
		permutation(arr, start +1, end);
		swap((arr + i), (arr + start));
	}
}

int	generate_permutacion(int *row, int left, int right, int size)
{
	int	size;
	int	i;

	i = 0;
	while (i < size)
	{
	}
	return (0);
}
