/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 15:56:03 by malberte          #+#    #+#             */
/*   Updated: 2018/05/11 13:11:30 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# include "./libft.h"
# include <unistd.h>

# define BUFF_SIZE 1000

typedef struct	s_multifd
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	size_t	ibuf;
}				t_multifd;

#endif
