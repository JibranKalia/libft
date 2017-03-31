/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:13:00 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/30 17:57:27 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int8_t		ft_nbrlen(intmax_t src)
{
	int8_t		ret;

	printf("NBRLEN = %ju\n", src);
	ret = (src < 0) ? 1 : 0;
	while (ret != 0)
	{
		src = src / 10;
		++ret;
	}
	return (ret);
}
