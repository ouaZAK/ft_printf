/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:24 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/18 15:01:32 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *count)
{
	if (n < 10)
		ft_putchar((n + '0'), count);
	else
	{
		ft_putnbr_unsigned((n / 10), count);
		ft_putnbr_unsigned((n % 10), count);
	}
}
