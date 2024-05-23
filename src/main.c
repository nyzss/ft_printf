/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:17:06 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 13:54:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*test_str = "%cwow%c, %c, %s, %s, %%\n";
	printf("string: %s\n", test_str);
	ft_printf(test_str, 'U', 'U', 'W', "wowzies", "placeholder");
}
