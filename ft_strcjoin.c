/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <acoulomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:07:50 by malberte          #+#    #+#             */
/*   Updated: 2018/04/30 19:03:19 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strclen(const char *s, const char c)
{
	size_t size;

	size = 0;
	while (s[size] != c)
		++size;
	return (size);
}

char    *ft_strcjoin(char const *dst, char const *src, char c)
{
	char	*s;
	size_t	size_src;
	size_t	size;

	if (!dst || !dst)
		return (NULL);
	size_src = ft_strclen(src, c);
	size = ft_strlen(dst);
	if (!(s = (char*)ft_memalloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_strcat(s, (char*)dst);
	ft_strlcat(s, (char*)src, size_src);
	return (s);
}