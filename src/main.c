/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:24:39 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 16:17:20 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	counter;
	int	*list_of_args;
	int	number_of_args;
	// void	*current_arg;

	counter = 0;
	list_of_args = args_count(str, &number_of_args);
	va_start(args, str);
	printf("number of args: %d\n", number_of_args);
	// while (counter < number_of_args)
	// {
	// 	current_arg = va_arg(args, );
	// 	counter++;
	// }
	printf("str: %s\n", str);
	print_args(list_of_args, number_of_args);
	va_end(args);
	return (1);
}

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
