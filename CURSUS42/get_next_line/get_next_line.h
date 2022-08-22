/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:35:15 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/22 20:22:33 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>

char	*get_next_line(int fd);
char	*get_next_line_1(int fd, char *mem);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_sub_inistr(char *s, size_t len);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strjoin_to_end(char *s1, char *s2);
size_t	ft_strlen(const char *str);

#endif
