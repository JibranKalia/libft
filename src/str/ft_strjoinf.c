/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 20:37:15 by jkalia            #+#    #+#             */
/*   Updated: 2017/04/22 13:09:12 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strjoinf(char *src1, char *src2, int d)
{
	char	*ret;
	char	*dst;
	size_t	len;

	CHK(src1 == 0 || src2 == 0, 0);
	CHK(d == 0, 0);
	len = ft_strlen(src1);
	len += ft_strlen(src2);
	CHK((dst = ft_strnew(len + 1)) == 0, NULL);
	ret = dst;
	while (*src1)
		*dst++ = *src1++;
	while (*src2)
		*dst++ = *src2++;
	*dst = '\0';
	if (d == 1)
		free(src1);
	else if (d == 2)
		free(src2);
	else if (d == 3)
	{
		free(src1);
		free(src2);
	}
	return (ret);
}
