/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:17:06 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 17:01:44 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// char	*test_str = "%cwow%c, %c, %s, %s, %%\n";
	char	*test_str2 = "number: %d\nstring: %s\npointer: %p\n";
	int		*wow = 1500;

	// printf("string: %s\n", test_str);
	// ft_printf(test_str, 'U', 'U', 'W', "wowzies", "placeholder");
	ft_printf(test_str2, 51240, "wow second string its cool", wow);
}
