/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 09:27:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/30 17:58:03 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char			*ft_itoa(intmax_t n)
{
	int8_t		len;
	uintmax_t	n_cpy;
	char		*ret;
	int			ngv_flag;

	len = ft_nbrlen(n);
	ngv_flag = (n < 0) ? 1 : 0;
	n_cpy = n;
	n_cpy = (ngv_flag == 1) ? -n : n;
	printf("Len %d\n", len);
	printf("%ju\n", n);
	CHK((ret = ft_strnew(len)) == NULL, NULL);
	CHK1(n == 0, *ret = '0', ret);
	if (ngv_flag == 1)
		ret[0] = '-';
	len = (ngv_flag == 0) ? len : len + 1;
	ret[len] = '\0';
	while (len > ngv_flag)
	{
		--len;
		ret[len] = n_cpy % 10 + '0';
		n_cpy /= 10;
	}
	return (ret);
}
