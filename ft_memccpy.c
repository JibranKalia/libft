/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:23:09 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/05 10:49:24 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int src_c, size_t len)
{
	const unsigned char	*csrc;
	unsigned char		*cdst;
	unsigned char		ch;

	csrc = (const unsigned char*)src;
	cdst = (unsigned char*)dst;
	ch = (unsigned char)src_c;
	while (len-- > 0)
	{
		if ((*cdst++ = *csrc++) == ch)
			return ((void *)cdst);
	}
	return (0);
}
