/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:12:42 by yasaidi           #+#    #+#             */
/*   Updated: 2023/02/07 12:24:58 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	write(1, str, ft_len(str));
	return (ft_len(str));
}


int	int_len(long nb_div)
{
	int		len;

	if (nb_div == 0)
		return (1);
	len = 0;
	if (nb_div < 0)
	{
		nb_div *= -1;
		len++;
	}
	while (nb_div > 0)
	{
		nb_div = nb_div / 10;
		len++;
	}
	return (len);
}
