/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:24:39 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 10:47:30 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		*list_of_args;
	size_t	counter;
	size_t		number_of_args;
	size_t	i;
	size_t	j;
	void	(*flag_functions[9])(va_list);

	flag_functions[0] = c_flag;
	flag_functions[1] = s_flag;
	flag_functions[2] = p_flag;
	i = 0;
	j = 0;
	counter = 0;
	printf("placeholder %ld\n", counter);
	list_of_args = args_count(str, &number_of_args);
	print_args(list_of_args, number_of_args);
	va_start(args, str);
	while (counter < number_of_args)
	{
		while (str[i])
		{
			if (str[i] == '%' && (is_set(str[i + 1])))
			{
				if (i != 0 && str[i - 1] == '%')
					i++;
				while (j < number_of_args)
				{
					if (is_set(str[j + 1]) == list_of_args[j])
						(*flag_functions[j])(args);
					j++;
				}
				i++;
			}
			ft_putchar_fd(str[i], 1);
			i++;
		}
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
