/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:56:37 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/26 09:27:50 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putstr(char *s, int *count);
void	ft_putchar(char c, int *count);
void	ft_putnbr(long n, int *count);
void	ft_putnbr_base(unsigned int n, char c, int *count);
void	ft_putnbr_unsigned(unsigned int n, int *count);
void	ft_putp(void *p, int *count);

#endif