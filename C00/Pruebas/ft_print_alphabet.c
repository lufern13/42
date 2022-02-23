/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:47:47 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/15 11:42:55 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter = letter + 1;
	}
}
