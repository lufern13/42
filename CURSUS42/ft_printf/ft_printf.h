/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:40:03 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/25 13:43:16 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *s, ...);

int	ft_putchr(char c);
int	ft_putstr(char *s);
int	ft_putptr(void *p);
int	ft_putnbr_base(int n, int b);
int	ft_putnbr_unsig(unsigned long int n, int b);

#endif