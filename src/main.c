/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:24:39 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 11:39:16 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	counter;
	size_t	number_of_args;
	void	*current_arg;

	counter = 0;
	number_of_args = args_count(str);
	va_start(args, str);
	while (counter < number_of_args)
	{
		current_arg = va_arg(args, )
		counter++;
	}
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
	char *str = "%%%%hello world:%d%s%g%a:%s%%%c%x";
	printf("str: %s\nargs: %ld\n", str, args_count(str));
}
