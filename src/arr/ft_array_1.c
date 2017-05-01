/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 10:23:23 by jkalia            #+#    #+#             */
/*   Updated: 2017/05/01 10:31:11 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	arr_set(t_arr *array, int i, void *el)
{
	CHECK(i > array->max, return,"arr attempt to set past max");
	if (i > array->end)
		array->end = i;
	array->contents[i] = el;
}

void	*arr_get(t_arr *array, int i)
{
	CHECK(i > array->max, return (NULL), "arr attempt to get past max");
	return (array->contents[i]);
}

void	*arr_remove(t_arr *array, int i)
{
	void *elm;

	CHECK(i > array->max, return (NULL), "arr attempt to get past max");
	elm = array->contents[i];
	array->contents[i] = NULL;
	return (elm);
}

void	*arr_new(t_arr *array)
{
	CHECK(array->element_size <= 0, return (NULL), "Can't use arr_new on 0 size arrs.");
	return (ft_memalloc(array->element_size * 1));
}

t_arr	*arr_create(size_t element_size, size_t initial_max)
{
	t_arr *array;

	array = ft_memalloc(sizeof(t_arr));
	CHECK_MEM(array, return(NULL));
	array->max = initial_max;
	CHECK1(array->max <= 0, free(array), return (NULL), "You must set an initial_max > 0.");
	array->contents = ft_memalloc(sizeof(void *) * initial_max);
	CHECK_MEM1(array->contents, free(array), return (NULL));
	array->end = 0;
	array->element_size = element_size;
	array->expand_rate = DEFAULT_EXPAND_RATE;
	return (array);
}
