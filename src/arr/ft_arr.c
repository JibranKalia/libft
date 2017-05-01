/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 08:10:09 by jkalia            #+#    #+#             */
/*   Updated: 2017/04/30 20:56:49 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

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

void	arr_clear(t_arr *array)
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

int		arr_resize(t_arr *array, size_t newsize)
{
	void	*contents;

	array->max = newsize;
	CHECK(array->max < 0, return (-1), "The newsize must be > 0.");
	contents = realloc(
			array->contents, sizeof(void *) * array->max);
	CHECK_MEM(contents, return (-1));
	array->contents = contents;
	return (0);
}

int		arr_expand(t_arr *array)
{
	size_t old_max;

	old_max = array->max;
	CHECK(arr_resize(array, array->max + array->expand_rate) == -1,
			return (-1), "Failed to expand array to new size: %d",
			array->max + (int)array->expand_rate);
	ft_memset(array->contents + old_max, 0, array->expand_rate + 1);
	return (0);
}

int		arr_contract(t_arr *array)
{
	int new_size;

	new_size = array->end < (int)array->expand_rate ?
		(int)array->expand_rate : array->end;
	return (arr_resize(array, new_size + 1));
}

void arr_destroy(t_arr *array)
{
	if (array)
	{
		if (array->contents)
			free(array->contents);
		free(array);
	}
}

void arr_clear_destroy(t_arr *array)
{
	arr_clear(array);
	arr_destroy(array);
}

int arr_push(t_arr *array, void *el)
{
	array->contents[array->end] = el;
	array->end++;

	if (ARR_END(array) >= ARR_MAX(array))
		return (arr_expand(array));
	else
		return (0);
}

void *arr_pop(t_arr *array)
{
	void	*el;

	CHECK(array->end - 1 >= 0, return (NULL), "Attempt to pop from empty array.");
	el = arr_remove(array, array->end - 1);
	array->end--;
	if (ARR_END(array) > (int)array->expand_rate
			&& ARR_END(array) % array->expand_rate)
	{
		arr_contract(array);
	}
	return (el);
}
