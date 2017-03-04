/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:19:19 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/03 17:19:21 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*tmp1;
	unsigned char	*tmp2;

	CHK(size == 0, 0);
	CHK((tmp1 = malloc(size)) == 0, 0);
	tmp2 = (unsigned char*)tmp1;
	while (size--)
		*tmp2++ = 0;
	return (tmp1);
}
