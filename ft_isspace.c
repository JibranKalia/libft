/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:03:29 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/03 17:06:17 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n' ||
				c == '\v' || c == '\f' || c == '\r') ? 1 : 0);
}
