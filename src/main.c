/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:17:06 by okoca             #+#    #+#             */
/*   Updated: 2024/05/22 22:17:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char *str = "%%%%hello world:%d%s%g%a:%s%%%c%x";

	if (argc > 1)
		ft_printf(argv[1]);
	else
	{
		ft_printf(str);
	}
	// printf("str: %s\nargs: %ld\n", str, args_count(str, ));
}
