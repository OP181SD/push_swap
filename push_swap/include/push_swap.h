/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:08:10 by yasaidi           #+#    #+#             */
/*   Updated: 2023/02/07 12:16:46 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define INT_MIN -2147483648
#define INT_MAX 2147483647

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct s_stack
{
	int data;
	int index;
	int position;
	struct s_stack *next;
	void *content;

} t_stack;

// parsing
int ft_atoiplus(const char *str);
void pars_args(int argc, char **argv);
bool lst_double(t_stack *lst, int current_num);
int *fill_sort_tab(t_stack *lst);
void min_max_tab(int *tab, int size, int *min, int *max);
void lst_print_stack(t_stack *lst, char *label);
void lst_print_sort_info(int *tab, int min, int max);
// do_op (stack_a)
t_stack *stack_a(t_stack *lst, int num);
void do_sa(t_stack **lst, char *label);
void do_ra(t_stack **lst);
void do_rra(t_stack **lst);
void do_pa(t_stack **stack_b, t_stack **stack_a);
void do_ss(t_stack **sa, t_stack **sb);

// do_op (stack_b)
void do_sb(t_stack **a, char *label);
void do_rb(t_stack **lst);
void do_rrb(t_stack **lst);
void do_pb(t_stack **stack_a, t_stack **stack_b);

// lst
t_stack	*ft_lstnew(int num);
void ft_lstadd_back(t_stack **lst, t_stack *new);
void ft_lstadd_front(t_stack **lst, t_stack *new);
void ft_lstclear(t_stack **lst, void (*del)(void *));
void ft_lstiter(t_stack *lst, void (*f)(void *));
t_stack	*ft_lstlast(t_stack *lst);
t_stack *ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack*ft_lstpre_last(t_stack*lst);
int	ft_lstsize(t_stack *lst);
void ft_lstdelone(t_stack *lst, void (*del)(void*));

// sort
// t_stack *sort_3(t_stack *lst);

#endif