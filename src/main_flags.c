/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:20:40 by okoca             #+#    #+#             */
/*   Updated: 2024/05/22 22:09:22 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_flag(char c)
{
	ft_putchar_fd(c, 1);
}

void	s_flag(char *str)
{
	ft_putstr_fd(str, 1);
}