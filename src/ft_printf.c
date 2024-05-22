/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:24:39 by okoca             #+#    #+#             */
/*   Updated: 2024/05/22 22:50:27 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		*list_of_args;
	size_t	counter;
	int		number_of_args;

	counter = 0;
	printf("placeholder %ld\n", counter);
	list_of_args = args_count(str, &number_of_args);
	print_args(list_of_args, number_of_args);
	va_start(args, str);
	while (counter < number_of_args)
	{

		counter++;
	}
	va_end(args);
	return (number_of_args);
}


// printf("number of args: %d\n", number_of_args);
// printf("str: %s\n", str);
// while (counter < number_of_args)
// {
// 	current_arg = va_arg(args, char);
// 	counter++;
// }
