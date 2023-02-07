/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:57:46 by yassine           #+#    #+#             */
/*   Updated: 2023/02/05 19:24:40 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "libft.h"
#include "ft_printf.h"

bool lst_double(t_stack *lst, int current_num)
{
	while (lst)
	{
		if (lst->data == current_num)
			return (true);
		lst = lst->next;
	}
	return (false);
}

void lst_print_stack(t_stack *lst, char *label)
{
	int index = 0;

	while (lst)
	{
		ft_printf("[%d] %d\t", index, lst->data);
		ft_printf("|%s|\n", label);
		lst = lst->next;
		index++;
	}
}

void lst_print_sort_info(int *tab, int min, int max)
{
	ft_printf("\nIndex of the first sorted element: [%d]\nValue sorted: %d\n", 0, tab[0]);
	ft_printf("Min: %d Max: %d\n", min, max);

}

void append_to_node(t_stack *lst, t_stack *new_node)
{
	t_stack  *head;

	head = lst;
	while (head->next)
		head = head->next;
	head->next = new_node;
}

t_stack *stack_a(t_stack *lst, int value)
{
	t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->data= value;
	new_node->next = NULL;
	if (lst == NULL)
		return new_node;
	append_to_node(lst, new_node);
	return lst;
}

