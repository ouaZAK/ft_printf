/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:29:01 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/26 09:19:24 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr(long x, int *count)
{
	if (x < 0)
	{
		ft_putchar('-', count);
		x *= -1;
	}
	if (x > 9)
	{
		ft_putnbr((x / 10), count);
		ft_putnbr((x % 10), count);
	}
	else
		ft_putchar((x + '0'), count);
}
