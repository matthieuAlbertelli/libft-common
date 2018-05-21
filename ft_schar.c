/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_schar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:47:11 by malberte          #+#    #+#             */
/*   Updated: 2018/05/21 09:54:30 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void			ft_sclear(t_string *dst)
{
	dst->s[0] = '\0';
	dst->len = 0;
}

char			*ft_sset(t_string *dst, char c, size_t start, size_t len)
{
	if (dst == NULL)
		return (NULL);
	if (start >= dst->len)
		return (dst->s);
	if (start + len >= dst->len)
		len = start + len - dst->len;
	ft_memset((void*)dst->s + start, c, len);
	return (dst->s);
}
