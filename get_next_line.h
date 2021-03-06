/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:35:00 by mmonereo          #+#    #+#             */
/*   Updated: 2020/11/29 19:36:37 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

int		get_next_line(const int fd, char **line);
int		ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
