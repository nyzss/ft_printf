/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:04:58 by okoca             #+#    #+#             */
/*   Updated: 2024/05/20 22:08:34 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	is_set(char c)
{
	char	*set;
	size_t	i;

	i = 0;
	set = ft_strdup("cspdiuxX%");
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	free(set);
	return (0);
}

size_t	args_count(const char*str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] == '%' && is_set(str[i + 1])))
		{
			if (str[i - 1] == '%' && str[i] == '%' && i != 0)
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

// char	**parse(const char *str)
// {

// }
