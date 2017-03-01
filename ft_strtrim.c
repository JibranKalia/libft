/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:58:07 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/28 10:58:08 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static char	*ft_nullreturn(char *new)
{
	CHK((new = (char*)malloc(sizeof(char))) == 0, 0);
	return (new);
}

char	*ft_strtrim(char const *src)
{
	char	*dst;
	size_t	i;
	size_t	len;

	len = 0;
	while(*src && ((*src == ' ' || *src == '\n' || *src == '\t')))
		src++;
	CHK1(!*src || src == 0, ft_nullreturn(dst), dst);
	while (src[len])
		len++;
	len--;
	while (src[len] && (src[len] == '\n' || src[len] == '\t' || src[len] == ' '))
		len--;
	CHK1(len <= 0, ft_nullreturn(dst), dst);
	CHK((dst = ft_strnew(len + 1)) == 0, 0);
	dst[len] = '\0';
	while (len)
	{
		dst[len] = src[len];
		len--;
	}
	return (dst);
}
