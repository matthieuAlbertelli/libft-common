/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 22:29:19 by malberte          #+#    #+#             */
/*   Updated: 2018/05/19 22:31:40 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnchr(const char *s, int c, size_t n)
{
	while (*s && n > 0)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		++s;
		--n;
	}
	if (c == '\0' || n == 0)
		return ((char *)s);
	return (NULL);
}
