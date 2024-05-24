/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:17:17 by okoca             #+#    #+#             */
/*   Updated: 2024/05/24 11:14:35 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		printed_char_nb;

	i = 0;
	printed_char_nb = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printed_char_nb += handle_flags(args, str[i + 1]);
			i++;
		}
		else
		{
			printed_char_nb++;
			ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (printed_char_nb);
}
