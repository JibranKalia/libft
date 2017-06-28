/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 11:33:37 by jkalia            #+#    #+#             */
/*   Updated: 2017/06/28 12:05:55 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of Square Root Function using Bakhsali Approximation
*/

float	ft_sqrtf(const float m)
{
	int		i;
	float	d;
	float	p;
	float	a;

	i = 0;
	while ((i * i) <= m)
		++i;
	--i;
	d = m - i * i;
	p = d / (2 * i);
	a = i + p;
	return (a - (p * p) / (2 * a));
}
