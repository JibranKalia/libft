/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:43:41 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/18 22:35:53 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	unsigned char	to_find;

	CHK(!src, 0);
	to_find = (unsigned char)c;
	while (*src != '\0' && *src != to_find)
		src++;
	if (*src == to_find)
		return ((char *)src);
	return (NULL);
}
