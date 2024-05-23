/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:37:31 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 21:47:17 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_flags(va_list args, char c)
{
	int	printed_char;
//	c\s\p\d\i\u\x\X\%
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
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		printed_char++;
	}
	printf("\n\nflag: %c, printed char: %d\n\n", c, printed_char);
	return (printed_char);
}
