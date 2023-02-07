/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaidi <yasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:39:36 by yasaidi           #+#    #+#             */
/*   Updated: 2023/01/10 08:02:54 by yasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
		new->next = (*lst);
	(*lst) = new;
}