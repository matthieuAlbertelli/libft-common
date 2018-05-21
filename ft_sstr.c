/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:46:02 by malberte          #+#    #+#             */
/*   Updated: 2018/05/21 09:57:40 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char			*ft_sappend(t_string *dst, const char *src)
{
	size_t len_src;

	if (dst == NULL || src == NULL)
		return (NULL);
	len_src = ft_strlen(src);
	if (dst->len + len_src >= dst->size)
	{
		if (ft_srealloc(dst, dst->size + len_src) == NULL)
			return (NULL);
	}
	ft_strcat(dst->s, src);
	dst->len += len_src;
	return (dst->s);
}

char			*ft_serase(t_string *dst, const char *src)
{
	size_t len_src;

	if (dst == NULL || src == NULL)
		return (NULL);
	len_src = ft_strlen(src);
	if (len_src >= dst->size)
	{
		if (ft_srealloc(dst, len_src + 1) == NULL)
			return (NULL);
	}
	ft_strcpy(dst->s, src);
	dst->len = len_src;
	return (dst->s);
}

char			*ft_sinsert(t_string *dst, const char *src, size_t index)
{
	size_t len_src;

	if (dst == NULL || src == NULL)
		return (NULL);
	len_src = ft_strlen(src);
	if (index + len_src >= dst->size)
	{
		if (ft_srealloc(dst, index + len_src + 1) == NULL)
			return (NULL);
	}
	ft_strcpy(dst->s + index, src);
	return (dst->s);
}
