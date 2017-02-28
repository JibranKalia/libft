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

#include "libft.h"

char	*ft_strtrim(char const *src)
{
	char	*dst;
	int		start;
	int		end;
	int		i;
	size_t	len;

	CHK(!*src, NULL);
	len = ft_strlen(src);
	end = len;
	start = 0;
	i = 0;
	CHK((dst = ft_strnew(len + 1)) == NULL, NULL);
	while (src[start] == '\n' || src[start] == '\t' || src[start] == ' ')
		start++;
	while (src[end] == '\n' || src[end] == '\t' || src[end] == ' ')
		end--;
	while (start < end)
	{
		dst[i] = src[start];
		i++;
		start++;
	}
	return (dst);
}
