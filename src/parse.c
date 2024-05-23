/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:04:58 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 14:53:40 by okoca            ###   ########.fr       */
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
	return (-1);
}

int	*args_count(const char *str, size_t *count)
{
	size_t	i;
	int		*flags;

	i = 0;
	flags = (int *)malloc(sizeof(int) * (NUMBER_OF_FLAGS + 1));
	if (!flags)
		return (NULL);
	while (str[i])
	{
		if ((str[i] == '%' && is_set(str[i + 1]) != -1))
		{
			if (i != 0 && str[i - 1] == '%' )
				i++;
			flags[*count] = is_set(str[i + 1]);
			// printf("\nactual char: %c\n", str[i+1]);
			*count = *count + 1;
			i++;
		}
		i++;
	}
	printf("args: %ld\n", *count);
	return (flags);
}

// char	**parse(const char *str)
// {
// }
