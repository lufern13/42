/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:01:12 by pedromar          #+#    #+#             */
/*   Updated: 2022/02/20 17:08:15 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	valid_size(char	*c);
int	valid_format(int size, char *argv);

int	valid_input(int argc, char	*argv)
{
	int	sq_size;

	if (argc != 2)
	{
		return (-1);
	}
	else
	{
		sq_size = valid_size(argv);
		if (sq_size == -1)
		{
			return (-1);
		}
		else if (valid_format(sq_size, argv) == -1)
		{
			return (-1);
		}
	}
	return (sq_size);
}

int	valid_size(char	*argv)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (*(argv + i) != '\0')
	{
		if (i % 2 == 1 && *(argv + i) != ' ')
		{
			return (-1);
		}
		if (i % 2 == 0)
		{
			size++;
		}
		i++;
	}
	if (size % 4 != 0)
	{
		return (-1);
	}
	else
		return (size / 4);
}

int	valid_format(int size, char *argv)
{
	int	i;

	i = 0;
	while (*(argv + i) != '\0')
	{
		if (i % 2 == 0 && (*(argv + i) < '0' || *(argv + i) > ('0' + size)))
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
