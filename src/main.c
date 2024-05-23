/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:17:06 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 21:54:02 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

//	c\s\p\d\i\u\x\X\%
int main()
{
	char	*test_str2 = "char: %c\nstring: %s\npointer: %p\nnumber: %d\ninteger: %i\nunsigned: %u\nsmall hexa: %x\nbig hexa: %X\npercent: %%\n";

	char			c = 'W';

	char			*str = "hello world!s!";

	int				*ptr = (int*)1500;

	int				num = -2147483647;

	long			big_num = 21474836481;

	unsigned int	u_num = 3147483647;

	int				return_ftprintf;
	int				return_printf;

	printf("\n-------------MINE-------------\n");
	return_ftprintf = ft_printf(test_str2, c, str, ptr, big_num, num, u_num - u_num - 1, num, *ptr);
	printf("\n-------------REAL-------------\n");
	return_printf = printf(test_str2, c, str, ptr, big_num, num, u_num - u_num - 1, num, *ptr);
	printf("\n\nreal: %d\nmine: %d\n", return_printf, return_ftprintf);
}
