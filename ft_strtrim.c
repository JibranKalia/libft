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
#include <stdio.h>

char	*ft_strtrim(char const *src)
{
	char	*dst;
	size_t	len;
	size_t	i;

	CHK((dst = (char*)malloc(sizeof(char))) == 0, 0);
	CHK(!src || !*src, dst);
	len = 0;
	i = -1;
	while (*src && src != 0 && ((*src == ' ' || *src == '\n' || *src == '\t')))
		src++;
	while (src[len] && src)
		len++;
	while ((src[len - 1] == '\n' || src[len - 1] == '\t'
			|| src[len - 1] == ' ') && len > 0)
		len--;
	CHK((dst = (char*)malloc(sizeof(char) * (len + 1))) == 0, 0);
	while (++i < len)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
