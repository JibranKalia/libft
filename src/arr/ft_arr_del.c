/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_dtr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 13:54:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/05/01 14:04:23 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		arr_clear(t_arr *array)
{
	int		i;

	i = 0;
	if (array->element_size > 0)
	{
		while (i < array->max)
		{
			if (array->contents[i] != NULL)
				free(array->contents[i]);
			++i;
		}
	}
}

void		arr_destroy(t_arr *array)
{
	if (array)
	{
		if (array->contents)
			free(array->contents);
		free(array);
	}
}

void		arr_del(t_arr *array)
{
	arr_clear(array);
	arr_destroy(array);
}
