/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaidi <yasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:54:19 by yassine           #+#    #+#             */
/*   Updated: 2023/01/10 08:10:00 by yasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*str;
	str = (char *) s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}