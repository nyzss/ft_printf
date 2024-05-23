/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:41 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 23:06:03 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

//REMOVE
# include <stdio.h>
//REMOVE

int		ft_printf(const char *str, ...);

int		handle_flags(va_list args, char c);

void	print_args(int *args, size_t count);

int	ft_putnbr_base(int nbr, char *base);

void	putn(unsigned long num, char *base, int *count);

int		c_flag(va_list args);

int		s_flag(va_list args);

int		p_flag(va_list args);

int		d_flag(va_list args);

int		u_flag(va_list args);

int		x_flag(va_list args);

int		big_x_flag(va_list args);

#endif
