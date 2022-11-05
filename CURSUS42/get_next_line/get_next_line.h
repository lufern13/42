/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:35:15 by lucifern          #+#    #+#             */
/*   Updated: 2022/11/05 18:38:08 by lucifern         ###   ########.fr       */
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
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_line(char *reading, int *i);
char	*read_line(int fd, char *reading);
char	*reset_reading(char *reading, int i);

int		ft_position_char(char *s, char c);
int		ft_strlen(char *str);

void	ft_free_alloc(char *s1, char *s2);
void	*ft_calloc(size_t count, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif
