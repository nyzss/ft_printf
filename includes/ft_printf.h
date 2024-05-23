/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:41 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 10:48:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define NUMBER_OF_FLAGS 9
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);

// char	**parse(const char *str);

int		*args_count(const char*str, size_t *count);

int		is_set(char c);

void	print_args(int *args, size_t count);

void	*flag_func(int *flags_list, int number_of_flags, int current_flag);

void	ft_putnbr_base(int nbr, char *base);

void	c_flag(va_list args);

void	s_flag(va_list args);

void	p_flag(va_list args);



#endif
