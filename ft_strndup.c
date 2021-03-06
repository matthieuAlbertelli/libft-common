/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:54:30 by malberte          #+#    #+#             */
/*   Updated: 2018/05/04 15:24:57 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ret;
	int		nb;

	nb = -1;
	if (!(ret = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while ((size_t)++nb < n)
		ret[nb] = s1[nb];
	ret[nb] = '\0';
	return (ret);
}
