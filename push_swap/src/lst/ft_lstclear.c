/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaidi <yasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:56:57 by yasaidi           #+#    #+#             */
/*   Updated: 2023/01/31 17:45:21 by yasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void ft_lstclear(t_stack **lst, void (*del)(void*))
{
	t_stack *tmp = NULL;

	tmp = (*lst);
	while(lst)
	{
		ft_lstdelone(tmp,del);
		(*lst) = (*lst)->next;
		tmp = (*lst);
	}
}