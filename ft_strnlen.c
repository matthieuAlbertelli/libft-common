/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:12:11 by malberte          #+#    #+#             */
/*   Updated: 2018/05/20 17:13:25 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strnlen(const char *s, size_t n)
{
	size_t size;

	size = 0;
	while (size < n && s[size])
		++size;
	return (size);
}
