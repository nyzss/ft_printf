/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:41 by okoca             #+#    #+#             */
/*   Updated: 2024/05/22 22:49:57 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);

// char	**parse(const char *str);

int		*args_count(const char*str, int *count);

int		is_set(char c, char *set);

void	print_args(int *args, int count);

void	*flag_func(int *flags_list, int number_of_flags, int current_flag);

void	ft_putnbr_base(int nbr, char *base);

void	c_flag(char c);

void	s_flag(char *str);

#endif
