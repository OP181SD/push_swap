/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:02:22 by yasaidi           #+#    #+#             */
/*   Updated: 2023/02/07 12:32:24 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void sort_2(t_stack **lst)
{
	if ((*lst)->data > (*lst)->next->data)
		do_sa(lst, "\nsa");
}

void sort_3(t_stack **lst)
{
	if ((*lst)->data > (*lst)->next->data)
		do_sa(lst, "\nsa");
	if ((*lst)->next->data > (*lst)->next->next->data)
		do_rra(lst);
	if ((*lst)->data > (*lst)->next->data)
		do_sa(lst, "\nsa");
}
void sort_5(t_stack **lst_a, t_stack **lst_b)
{
	sort_3(lst_a);
	do_pb(lst_a,lst_b);
}

int main(int argc, char **argv)
{
	t_stack *lst_a = NULL;
	t_stack *lst_b = NULL;
	int min = 0;
	int max = 0;
	int i = 1;
	int *tab = NULL;
	while (i < argc)
	{
		pars_args(argc, argv);
		lst_a = stack_a(lst_a, ft_atoiplus(argv[i]));

		i++;
	}
	if (lst_a != NULL)
	{
		tab = fill_sort_tab(lst_a);
		min_max_tab(tab, 5, &min, &max);
		sort_5(&lst_a, &lst_b);
		lst_print_sort_info(tab, min, max);
		lst_print_stack(lst_a, "stack_a");
		ft_printf("-----------------\n");
		lst_print_stack(lst_b, "stack_b");
	}
	return 0;
}