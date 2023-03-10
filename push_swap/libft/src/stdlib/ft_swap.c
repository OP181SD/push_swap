/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:01:25 by yassine           #+#    #+#             */
/*   Updated: 2023/02/05 16:01:38 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"


void ft_swap(int *tab, int i)
{
	int tmp;

	tmp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = tmp;
}