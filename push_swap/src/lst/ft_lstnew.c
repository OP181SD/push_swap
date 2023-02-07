/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaidi <yasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:32:59 by yasaidi           #+#    #+#             */
/*   Updated: 2023/01/31 17:46:25 by yasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "libft.h"
#include "ft_printf.h"

t_stack	*ft_lstnew(int value)
{
	t_stack *lst;

	lst = malloc(sizeof(t_stack));
	if (!lst)
		return (NULL);
	lst->data= value;
	lst->next = NULL;

	return (lst);
}
