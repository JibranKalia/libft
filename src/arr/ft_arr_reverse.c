/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 21:33:50 by jkalia            #+#    #+#             */
/*   Updated: 2017/06/25 21:35:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		arr_reverse(t_arr *array)
{
	int len;
	int i;

	if (array == NULL || array->end == 0)
		return ;
	i = 0;
	len = ARR_COUNT(array) - 1;
	while (i < len)
	{
		ft_swap(array->contents[i], array->contents[len], array->element_size);
		++i;
		--len;
	}
}

