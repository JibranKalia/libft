/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 09:27:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/30 17:43:05 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char			*ft_itoa(intmax_t nb)
{
	int8_t		len;
	uintmax_t	n;
	char		*ret;
	int			ngv_flag;

	ngv_flag = (nb < 0) ? 1 : 0;
	n = nb;
	n = (ngv_flag == 1) ? -nb : nb;
	len = ft_nbrlen(n);
	CHK((ret = ft_strnew(len)) == NULL, NULL);
	CHK1(nb == 0, *ret = '0', ret);
	if (ngv_flag == 1)
		ret[0] = '-';
	len = (ngv_flag == 0) ? len : len + 1;
	ret[len] = '\0';
	while (len > ngv_flag)
	{
		--len;
		ret[len] = n % 10 + '0';
		n /= 10;
	}
	return (ret);
}
