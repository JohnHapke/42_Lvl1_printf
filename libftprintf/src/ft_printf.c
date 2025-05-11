/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:56:50 by jhapke            #+#    #+#             */
/*   Updated: 2025/05/11 13:51:11 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_handler(const char *format, va_list args)
{
	int		count;

	count = 0;
	if (*format == 'c')
		count = (ft_putchar(va_arg(args, int)));
	else if ((*format == 'd' || *format == 'i'))
		count = (ft_putnbr((long long int)va_arg(args, int), 10, N_INT));
	else if (*format == 'p')
		count = (ft_putnbr_address(va_arg(args, void *)));
	else if (*format == 's')
		count = (ft_putstr(va_arg(args, char *)));
	else if (*format == 'u')
		count = (ft_putnbr((long long int)va_arg(args, unsigned int), 10, N_INT_UNS));
	else if (*format == '%')
		count = (ft_putchar('%'));
	else if (*format == 'x')
		count = (ft_putnbr((long long int)va_arg(args, unsigned int), 16, N_HEX_LOW));
	else if (*format == 'X')
		count = (ft_putnbr((long long int)va_arg(args, unsigned int), 16, N_HEX_UP));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	if (!format)
		return (0);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += ft_printf_handler(format, args);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
