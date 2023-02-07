/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:12:12 by yasaidi           #+#    #+#             */
/*   Updated: 2023/02/07 12:16:18 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../../include/push_swap.h"
#include "libft.h"

void ft_sort_int_tab(int *tab, int size)
{
	int i;

	size--;
	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(tab, i);
			i = 0;
		}
		else
			i++;
	}
}

void min_max_tab(int *tab, int size, int *min, int *max)
{
	int i;

	i = 0;
	*min = tab[i];
	*max = tab[i];
	while (i < size)
	{
		if (tab[i] < *min)
			*min = tab[i];
		else if (tab[i] > *max)
			*max = tab[i];
		i++;
	}
}

int *fill_sort_tab(t_stack *lst)
{
	int i;
	int size;
	int *tab = NULL;
	size = ft_lstsize(lst);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return 0;
	i = 0;
	while (i < size)
	{
		tab[i] = lst->data;
		lst = lst->next;
		i++;
	}
	ft_sort_int_tab(tab, size);
	return (tab);
}

