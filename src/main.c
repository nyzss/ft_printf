/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:17:06 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 21:03:05 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// char	*test_str = "%cwow%c, %c, %s, %s, %%\n";
	char	*test_str2 = "number: %d\nstring: %s\npointer: %p\n";
	int		*wow = (int*)1500;

	// printf("string: %s\n", test_str);
	// ft_printf(test_str, 'U', 'U', 'W', "wowzies", "placeholder");
	printf("\n-------------MINE-------------\n");
	ft_printf(test_str2, 21474836481, "wow second string its cool", wow);
	printf("\n-------------REAL-------------\n");
	printf(test_str2, 21474836481, "wow second string its cool", wow);
}
