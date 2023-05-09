/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:33:55 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/26 12:41:09 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static void	check(va_list arg, int c, int *count)
{
	if (c == '%')
		ft_putchar('%', count);
	if (c == 'c')
		ft_putchar(va_arg(arg, int), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), count);
	else if (c == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (c == 'x' || c == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), c, count);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int), count);
	else if (c == 'p')
		ft_putp(va_arg(arg, void *), count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	argument;

	va_start(argument, s);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
			check(argument, s[++i], &count);
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(argument);
	return (count);
}
