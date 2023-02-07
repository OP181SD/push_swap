/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaidi <yasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:55:49 by yasaidi           #+#    #+#             */
/*   Updated: 2023/02/06 21:05:47 by yasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "libft.h"
#include "ft_printf.h"

// modifiy the adress of a to swap
void do_sa(t_stack **a, char *label)
{
	int tmp;
	if (!a)
		return;
	tmp = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = tmp;
	write(1, label, ft_strlen(label));
}

void do_ra(t_stack **lst)
{
	if (!lst)
		return;
	t_stack *first;
	first = (*lst);
	(*lst) = (*lst)->next;
	first->next = NULL;
	ft_lstadd_back(lst, first);
	write(2, "ra\n", 3);
}

void do_rra(t_stack **lst)
{
	t_stack *pre_end = NULL;
	t_stack *end;
	if (!*lst || ft_lstsize(*lst) < 2)
		return;
	pre_end = ft_lstpre_last(*lst);
	end = ft_lstlast(*lst);
	end->next = (*lst);
	pre_end->next = NULL;
	*lst = end;
	write(2, "rra\n", 3);
}

void do_pa(t_stack **stack_b, t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *head;

	tmp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	head = (*stack_a);
	(*stack_a) = tmp;
	(*stack_a)->next = head;
}

// int main(int argc, char **argv)
// {
// 	int i;
// 	t_stack *lst_a;
// 	t_stack *lst_b;

// 	lst_a = NULL;
// 	lst_b = NULL;
// 	i = 1;
// 	while (i < argc)
// 	{
// 		lst_a = stack_a(lst_a, ft_atoi(argv[i]));
// 		i++;
// 	}
// 	pars_args(argc, argv);

// 	do_pb(&lst_a, &lst_b);
// 	lst_print_font(lst_a, "a");
// 	lst_print_font(lst_b, "b");

// 	return 0;
// }