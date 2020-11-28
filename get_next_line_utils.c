/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:24:29 by mmonereo          #+#    #+#             */
/*   Updated: 2020/11/27 11:04:11 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (size--)
	{
		*dest++ = *source++;
	}
	return ((unsigned char *)dst);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*joined;
	unsigned int	tlen;

	if (!s1 && !s2)
		return (0);
	tlen = (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(joined = malloc(sizeof(char) * tlen)))
		return (0);
	ft_memcpy(joined, s1, ft_strlen(s1));
	ft_memcpy(joined + ft_strlen(s1), s2, ft_strlen(s2));
	joined[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free((void*)s1);
	return (joined);
}

