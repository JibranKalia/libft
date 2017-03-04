/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:03:45 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/03 17:04:24 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ispunct(int c)
{
	return (((c >= '!' && c <= '\'') || (c >= '(' && c <= '/') ||
			(c >= ':' && c <= '?') || c == '@' || (c >= '[' && c <= '_') ||
			c == '`' || (c >= '{' && c <= '~')) ? 1 : 0);
}
