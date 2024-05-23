/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:20:40 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 10:54:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	ft_putnbr_base((unsigned long)(ptr), "0123456789ABCDEF");
}
