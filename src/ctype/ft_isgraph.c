/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:12:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/27 11:12:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isgraph(int c)
{
	return ((c >= 33 && c < 127) ? 1 : 0);
}
