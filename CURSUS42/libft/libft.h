/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:10:53 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/22 21:29:12 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dest, void *src, size_t n);//FALTA PROBAR
//ft_memmove
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
int		ft_tolower(int c);
int		ft_tolower(int c);
//ft_strchr
//ft_strrchar
//ft_strncmp
//ft_memchr
//ft_memcmp
//ft_strnstr
int		ft_atoi(char *str);

//ft_calloc
//ft_strdup

#endif
