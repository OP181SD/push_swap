/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaidi <yasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:39:36 by yasaidi           #+#    #+#             */
/*   Updated: 2023/01/31 17:45:17 by yasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst != NULL)
		new->next = (*lst);
	(*lst) = new;
}