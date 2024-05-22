/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:27:23 by okoca             #+#    #+#             */
/*   Updated: 2024/05/22 22:22:26 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*flag_func(int *flags_list, int number_of_flags, int current_flag)
{
	int		i;
	void	(*flag_functions[9]);

	i = 0;
	flag_functions[0] = c_flag;
	flag_functions[1] = s_flag;
	while (i < number_of_flags)
	{
		if (current_flag == flags_list[i])
			return (flag_functions[i]);
		i++;
	}
	return (NULL);
}
