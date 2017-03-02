/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:26:00 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/02 12:26:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list**alst,void(*del)(void*, size_t))
{
	t_list	*tmp;

	if (!*alst || !alst)
		return ;
	while (*alst)
	{
		del((*alst)->cnt, (*alst)->sze);
		tmp = (*alst)->nxt;
		free(*alst);
		*alst = NULL;
		*alst = tmp;
	}
}

