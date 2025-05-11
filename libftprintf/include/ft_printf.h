/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:38:07 by jhapke            #+#    #+#             */
/*   Updated: 2025/05/11 13:52:56 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

typedef enum e_number_code
{
    N_INT,
    N_INT_UNS,
    N_HEX_LOW,
    N_HEX_UP,
}   t_number_code;

int		ft_printf(const char *format, ...);
int		ft_printf_handler(const char *format, va_list args);
int	    ft_putchar(int c);
int     ft_putstr(char *str);
int		ft_count_digits(long long int nbr, int base, t_number_code code);
int		ft_putnbr(long long int nbr, int base, t_number_code code);
int		ft_putnbr_address(void *ptr);

#endif