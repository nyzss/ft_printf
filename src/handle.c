/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:37:31 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 21:11:25 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_flags(va_list args, char c)
{
//	c\s\p\d\i\u\x\X\%
	if (c == 'c')
		c_flag(args);
	else if (c == 's')
		s_flag(args);
	else if (c == 'd')
		d_flag(args);
	else if (c == 'p')
		p_flag(args);
	else if (c == 'i')
		d_flag(args);
	else if (c == 'u')
		u_flag(args);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	return (1);
}
