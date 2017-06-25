/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_qsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 18:12:56 by jkalia            #+#    #+#             */
/*   Updated: 2017/05/05 16:15:04 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	arr_qsort(t_arr *array, t_arr_compare cmp)
{
	qsort(array->contents, ARR_COUNT(array), sizeof(void *), cmp);
	return (0);
}
