/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 10:24:57 by jkalia            #+#    #+#             */
/*   Updated: 2017/05/01 13:34:40 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	arr_destroy(t_arr *array)
{
	if (array)
	{
		if (array->contents)
			free(array->contents);
		free(array);
	}
}

void	arr_clear_destroy(t_arr *array)
{
	arr_clear(array);
	arr_destroy(array);
}

int		arr_push(t_arr *array, void *el)
{
	array->contents[array->end] = el;
	array->end++;
	if (ARR_END(array) >= ARR_MAX(array))
		return (arr_expand(array));
	else
		return (0);
}

void	*arr_pop(t_arr *array)
{
	void	*el;

	CHECK(array->end - 1 >= 0, RETURN(NULL),
			"Attempt to pop from empty array.");
	el = arr_remove(array, array->end - 1);
	array->end--;
	if (ARR_END(array) > (int)array->expand_rate
			&& ARR_END(array) % array->expand_rate)
	{
		arr_contract(array);
	}
	return (el);
}
