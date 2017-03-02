/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:07:02 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/27 11:07:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					neg_flag;
	unsigned long long	res;
	int					i;

	i = 0;
	res = 0;
	while (ISSPACE(*str))
		str++;
	neg_flag = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while(*str == '0')
		str++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (i > 19)
		return ((neg_flag == 1) ? -1 : 0);
	return (neg_flag * (int)res);
}
