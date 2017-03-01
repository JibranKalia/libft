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
#include <unistd.h>

static char	*ft_nullreturn(char *dst)
{
	CHK((dst = (char*)malloc(sizeof(char))) == 0, 0);
	return (dst);
}

char	*ft_strtrim(char const *src)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = 0;
	i = -1;
	while(*src && ((*src == ' ' || *src == '\n' || *src == '\t')))
		src++;
	CHK(!*src || src == 0, ft_nullreturn(dst));
	while (src[len])
		len++;
	while (src[len - 1] == '\n' || src[len - 1] == '\t' || src[len - 1] == ' ')
		len--;
	CHK(len <= 0, ft_nullreturn(dst));
	CHK((dst = (char*)malloc(sizeof(char) * (len + 1))) == 0, 0);
	while (++i < len)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
