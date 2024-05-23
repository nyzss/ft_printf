/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:20:40 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 21:55:41 by okoca            ###   ########.fr       */
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
int	c_flag(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	s_flag(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	p_flag(va_list args)
{
	void*	ptr;
	int		ptr_prefix_len;

	ptr_prefix_len = 2;
	ptr = va_arg(args, void *);
	ft_putstr_fd("0x", 1);
	return (ft_putnbr_base((unsigned long)(ptr), "0123456789abcdef") + ptr_prefix_len);
}
int	d_flag(va_list args)
{
	int	d;

	d = va_arg(args, int);
	return (ft_putnbr_base(d, "0123456789"));
}

int	u_flag(va_list args)
{
	unsigned int	d;
	int				count;

	count = 0;
	d = va_arg(args, unsigned int);
	putn(d, "0123456789", &count);
	return (count);
}

int	x_flag(va_list args)
{
	int	d;
	d = va_arg(args, int);
	return (ft_putnbr_base(d, "0123456789abcdef"));
}

int	big_x_flag(va_list args)
{
	int	d;
	d = va_arg(args, int);
	return (ft_putnbr_base(d, "0123456789ABCDEF"));
}
