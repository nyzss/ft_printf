/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:04:58 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 09:54:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	is_set(char c)
{
	size_t	i;
	char	*set;

	i = 0;
	set = ft_strdup("cspdiuxX%");
	while (set[i])
	{
		if (c == set[i])
			return (i);
		i++;
	}
	return (0);
}

int	*args_count(const char *str, int *count)
{
	size_t	i;
	int		*flags;
	printf("here");

	i = 0;
	// while (i < NUMBER_OF_FLAGS)
	// {
	// 	printf("%c: %ld\n", set[i], i);
	// 	i++;
	// }
	i = 0;
	flags = (int *)malloc(sizeof(int) * (NUMBER_OF_FLAGS + 1));
	if (!flags)
		return (NULL);
	while (str[i])
	{
		if ((str[i] == '%' && is_set(str[i + 1])))
		{
			if (str[i - 1] == '%' && str[i] == '%' && i != 0)
				i++;
			flags[*count] = is_set(str[i + 1]);
			*count = *count + 1;
		}
		i++;
	}
	return (flags);
}

// char	**parse(const char *str)
// {
// }
