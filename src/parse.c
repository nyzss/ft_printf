/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:04:58 by okoca             #+#    #+#             */
/*   Updated: 2024/05/22 12:08:11 by okoca            ###   ########.fr       */
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
			return (i);
		i++;
	}
	// free(set);
	return (0);
}

int	*args_count(const char*str, int *count)
{
	size_t	i;
	int		*flags;
	char	*set;

	i = 0;
	set = ft_strdup("cspdiuxX%");
	while (i < ft_strlen(set))
	{
		printf("%c: %ld\n", set[i], i);
		i++;
	}
	i = 0;
	flags = (int *)malloc(sizeof(int) * (ft_strlen(set) + 1));
	while (str[i])
	{
		if ((str[i] == '%' && is_set(str[i + 1], set)))
		{
			if (str[i - 1] == '%' && str[i] == '%' && i != 0)
				i++;
			flags[*count] = is_set(str[i + 1], set);
			*count = *count + 1;
		}
		i++;
	}
	flags[*count] = -1;
	return (flags);
}

// char	**parse(const char *str)
// {
// }
