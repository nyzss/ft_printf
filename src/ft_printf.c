/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:17:17 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 16:47:35 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			handle_flags(args, str[i + 1]);
			i++;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (1);
}
