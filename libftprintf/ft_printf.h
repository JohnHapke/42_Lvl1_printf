/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:38:07 by jhapke            #+#    #+#             */
/*   Updated: 2025/01/09 11:11:40 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printf_aux(const char *format, va_list args);
int		ft_printf_c(char c);
int		ft_printf_dec(int n);
int		ft_count_digits(int dec);
char	*ft_itoa(int n);
int		ft_printf_p(void *ptr);
int		ft_sprintf(unsigned long adress);
int		ft_printf_s(char const *ptr);
int		ft_printf_u(unsigned int n);
char	*ft_itoa_uns(unsigned int dec);
int		ft_count_digit_uns(unsigned int n);
size_t	ft_strlen(const char *str);
int		ft_printf_x(unsigned long c);
int		ft_printf_xup(unsigned long c);
int		ft_count_hex_digits(unsigned long hex);
char	*ft_itoa_hex_l(unsigned long hex);
char	*ft_itoa_hex_u(unsigned long hex);
void	ft_sprintf_write(char *buffer, int i);
char	*ft_strdup(const char *str);
int		ft_putstr(char *buffer);

#endif