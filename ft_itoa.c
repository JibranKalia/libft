/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 09:27:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/03 19:48:43 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	nbr_len(long long n)
{
	size_t	i;

	i = 1;
	while ((n /= 10) > 0)
		i++;
	return (i);
}

char			*ft_itoa(int nb)
{
	long long	n;
	int			len;
	char		*ret;
	int			ngv_flag;

	ngv_flag = (nb >= 0) ? 0 : 1;
	n = nb;
	n = (ngv_flag == 0) ? n : -n;
	len = nbr_len(n);
	CHK((ret = ft_strnew(len + 1)) == NULL, NULL);
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
