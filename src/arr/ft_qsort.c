/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 18:12:56 by jkalia            #+#    #+#             */
/*   Updated: 2017/06/28 10:50:18 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	qsort_swap(void **v, int i, int j)
{
	void *tmp;

	tmp = v[i];
	v[i] = v[j];
	v[j] = tmp;
}

void	ft_qsort(void **v, int left, int right, int (*comp) (void *, void *))
{
	int	i;
	int	last;

	if (left >= right)
		return ;
	qsort_swap(v, left, (left + right) / 2);
	last = left;
	i = left + 1;
	while (i <= right)
	{
		if (((*comp)(v[i], v[left])) < 0)
			qsort_swap(v, ++last, i);
		++i;
	}
	qsort_swap(v, left, last);
	ft_qsort(v, left, last - 1, comp);
	ft_qsort(v, last + 1, right, comp);
}
