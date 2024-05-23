/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:37:31 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 16:57:53 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_flags(va_list args, char c)
{
//	cspdiuxX%
	if (c == 'c')
		c_flag(args);
	else if (c == 's')
		s_flag(args);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	else if (c == 'd')
		d_flag(args);
	else if (c == 'p')
		p_flag(args);
	return (1);
}
