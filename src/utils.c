/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:11:00 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 16:19:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	print_args(int *args, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_putnbr_fd(args[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
}