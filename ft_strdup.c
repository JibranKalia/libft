/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:45:07 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/03 17:46:21 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int			len;
	char		*dst;

	len = ft_strlen(src);
	CHK((dst = (char*)malloc(sizeof(char) * (len + 1))) == 0, 0);
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - len);
}
