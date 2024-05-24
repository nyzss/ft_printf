/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:37:31 by okoca             #+#    #+#             */
/*   Updated: 2024/05/24 08:30:24 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_flags(va_list args, char c)
{
	int	printed_char;

	printed_char = 0;
	if (c == 'c')
		printed_char += c_flag(args);
	else if (c == 's')
		printed_char += s_flag(args);
	else if (c == 'd')
		printed_char += d_flag(args);
	else if (c == 'p')
		printed_char += p_flag(args);
	else if (c == 'i')
		printed_char += d_flag(args);
	else if (c == 'u')
		printed_char += u_flag(args);
	else if (c == 'x')
		printed_char += x_flag(args);
	else if (c == 'X')
		printed_char += big_x_flag(args);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		printed_char++;
	}
	return (printed_char);
}
