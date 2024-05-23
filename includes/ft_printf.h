/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:41 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 16:57:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define NUMBER_OF_FLAGS 9
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);

int		handle_flags(va_list args, char c);

void	print_args(int *args, size_t count);

void	ft_putnbr_base(int nbr, char *base);

void	c_flag(va_list args);

void	s_flag(va_list args);

void	p_flag(va_list args);

void	d_flag(va_list args);

#endif
