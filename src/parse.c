/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:04:58 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 12:21:54 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	is_set(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	free(set);
	return (0);
}

size_t	*args_count(const char*str)
{
	size_t	i;
	size_t	count;
	size_t	*flags;
	char	*set;

	i = 0;
	count = 0;
	set = ft_strdup("cspdiuxX%");
	flags = (char *)malloc(sizeof(char) * (ft_strlen(set) + 1));
	while (str[i])
	{
		if ((str[i] == '%' && is_set(str[i + 1]), set))
		{
			if (str[i - 1] == '%' && str[i] == '%' && i != 0)
				i++;
			flags[count] = ft_strchr(set, str[i + 1]);
			count++;
		}
		i++;
	}
	flags[count] = NULL;
	return (flags);
}

// char	**parse(const char *str)
// {
// }
