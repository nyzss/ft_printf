/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:20:40 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 21:20:17 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

///	c
/// s
/// p
/// d
/// i
/// u
/// %

// x
// X
void	c_flag(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
}

void	s_flag(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	ft_putstr_fd(str, 1);
}

void	p_flag(va_list args)
{
	void*	ptr;

	ptr = va_arg(args, void *);
	ft_putstr_fd("0x", 1);
	ft_putnbr_base((unsigned long)(ptr), "0123456789abcdef");
}
void	d_flag(va_list args)
{
	int	d;

	d = va_arg(args, int);
	ft_putnbr_fd(d, 1);
}

void	u_flag(va_list args)
{
	unsigned int	d;

	d = va_arg(args, unsigned int);
	putn(d, "0123456789");
}
