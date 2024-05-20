/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:24:39 by okoca             #+#    #+#             */
/*   Updated: 2024/05/20 15:16:41 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list args;

	va_start(args, str);

	printf("hello world, %s\n", str);

	va_end(args);
	return (1);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		ft_printf(argv[1]);
	else
	{
		ft_printf("wowzies");
	}
}
