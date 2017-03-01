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

char	*ft_strtrim(char const *src)
{
	char	*dst;
	size_t	start;
	size_t	i;
	size_t	len;

	CHK(!*src, 0);
	len = 0;
	start = 0;
	i = -1;
	while (src[len] != '\0')
		len++;
	CHK((dst = ft_strnew(len + 1)) == NULL, NULL);
	len--;
	CHK(len <= 0, 0);
	while (src[start] == '\n' || src[start] == '\t' || src[start] == ' ')
		start++;
	while (src[len] == '\n' || src[len] == '\t' || src[len] == ' ')
		len--;
	len = len - start + 1;
	if (len <= 0)
		return (0);
	while (++i < len)
		dst[i] = src[start + i];
	dst[i] = '\0';
	return (dst);
}
