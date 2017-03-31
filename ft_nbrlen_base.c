/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:19:14 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/30 17:35:48 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int8_t		ft_nbrlen_base(uintmax_t	src, int8_t	base)
{
	int8_t	ret;

	if (src == 0)
		return (1);
	while (src != 0)
	{
		src = src / base;
		++ret;
	}
	return (ret);
}
