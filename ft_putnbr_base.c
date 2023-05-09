/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:45:29 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/18 15:02:04 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_base(unsigned int n, char c, int *count)
{
	unsigned int	len;
	char			*base;

	len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (n < len)
		ft_putchar(base[n % len], count);
	else
	{
		ft_putnbr_base((n / len), c, count);
		ft_putnbr_base((n % len), c, count);
	}
}
