/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 09:27:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/01 09:27:40 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	nbr_len(long n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int nb)
{
	long	n;
	int		len;
	char	*ret;
	int		ngv_flag;

	ngv_flag = (nb >= 0) ? 0 : 1;
	n = (ngv_flag == 0) ? nb : -nb;
	len = nbr_len(n);
	CHK((ret = ft_strnew(len + 2)) == NULL, NULL);
	if (ngv_flag == 1)
		ret[0] = '-';
	len = (ngv_flag == 0) ? len : len + 1;
	ret[len] = '\0';
	while (len > ngv_flag)
	{
		--len;
		ret[len] = n % 10 + '0';
		n = n / 10;
	}
	return (ret);
}
