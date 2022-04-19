/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:40:03 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/19 19:45:42 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>

int		ft_printf(char const *s, ...);

void	ft_putchr(char c);
void	ft_putstr(char *s);
void	ft_putptr(void *p);
void	ft_putnbrdec(float n);
void	ft_putnbr_base(int n, char *base);

#endif