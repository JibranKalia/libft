/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:11:32 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/27 11:11:34 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iscntrl(int c)
{
	return (((c >= 0 && c < 32) || c == 127) ? 1 : 0);
}
