/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejemploRec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:00:16 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/21 16:02:30 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr_rec(int nb, int resto)
{
	char	cifra;

	if (resto < 10) //CASO BASE
    {
        if (nb < 0)
            write(1, "-", 1);
        write(1, &resto, 1);
        return;
    }
    //PASO RECURSIVO
    ft_putnbr_rec(nb, resto/10);
    cifra = (resto % 10) + '0';
    write(1, &cifra, 1);
}

void    ft_putnbr(int nb)
{
    unsigned char    number;

    if (nb < 0)
        number = nb * -1;
    else
        number = nb;
    ft_putnbr_rec(nb, number);
}

int    main(void)
{
    int nb;

    nb = 42;
    ft_putnbr(nb);
    return (0);
}
