/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaidi <yasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:56:57 by yasaidi           #+#    #+#             */
/*   Updated: 2023/01/10 08:03:00 by yasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp = NULL;

	tmp = (*lst);
	while(lst)
	{
		ft_lstdelone(tmp,del);
		(*lst) = (*lst)->next;
		tmp = (*lst);
	}
}