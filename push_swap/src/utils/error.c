/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:57:46 by yassine           #+#    #+#             */
/*   Updated: 2023/02/05 13:29:38 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void check_overlow(int result, int prev, int neg)
{
	if (result < prev && (result != INT_MIN || neg != -1))
		write(2, "Overflow", 8), exit(0);
}

void check_char(const char *str, int i)
{
	if (str[i])
		write(1, "Error\n", 6), exit(0);
}

int ft_atoiplus(const char *str)
{
	int i;
	int neg;
	int result;
	int prev;

	i = 0;
	neg = 1;
	result = 0;
	prev = 0;
	result = prev;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		check_overlow(result, prev, neg);
		i++;
	}
	check_char(str, i);
	return (result * neg);
}

void pars_args(int argc, char **argv)
{

	t_stack *lst;
	int i;
	int n;

	i = 1;
	lst = NULL;
	while (i < argc)
	{
		n = ft_atoiplus(argv[i]);
		if (!lst_double(lst, n))
			lst = stack_a(lst, n);
		else
			write(2, "Error\n", 7),exit(0);
		i++;
	}
}
