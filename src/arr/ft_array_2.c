/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 10:23:23 by jkalia            #+#    #+#             */
/*   Updated: 2017/05/01 10:31:22 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
