/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:19:11 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/03 17:20:00 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	const unsigned char		*csrc;
	unsigned char			*cdst;

	csrc = (const unsigned char*)src;
	cdst = (unsigned char*)dst;
	while (len-- > 0)
		*cdst++ = *csrc++;
	return (dst);
}
