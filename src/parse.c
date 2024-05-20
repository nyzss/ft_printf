/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:04:58 by okoca             #+#    #+#             */
/*   Updated: 2024/05/20 16:19:40 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	args_count(const char*str)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char *flags;

	flags = ft_strdup("cspdiuxX%");
	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			while (flags[j])
			{
				if (str[i] != '\0' && str[i + 1] == flags[j])
					count++;
				j++;
			}
		}
		i++;
	}
	free(flags);
}

char	**parse(const char *str)
{

}
