/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 09:33:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/02 09:33:40 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
{
	if (!*alst || !alst)
		return ;
	if (del)
		del((*alst)->cnt, (*alst)->sze);
	free(*alst);
	*alst = NULL;
}


/**
void	ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
{
	del((*alst)->cnt, (*alst)->sze);
	free(*alst);
	*alst = 0;
}
**/
