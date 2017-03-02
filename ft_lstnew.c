/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 08:59:28 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/02 08:59:34 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *src, size_t sze)
{
	t_list	*new;

	CHK((new = (t_list*)malloc(sizeof(t_list))) == NULL, NULL);

	if (!src)
	{
		new->cnt = NULL;
		new->sze = 0;
	}
	else
	{
		CHK1((new->cnt = malloc(sizeof(sze))) == NULL, free(new), NULL);
		ft_memcpy(new->cnt, src, sze);
		new->sze = sze;
	}
	new->nxt = NULL;
	return (new);
}