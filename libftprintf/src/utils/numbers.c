/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:47:16 by jhapke            #+#    #+#             */
/*   Updated: 2025/05/11 13:52:30 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_digits(long long int nbr, int base, t_number_code code)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0 && base == 10 && code == N_INT)
	{
		count++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= base;
		count++;
	}
	return (count);
}

int	ft_putnbr(long long int nbr, int base, t_number_code code)
{
	int		len;
	int		i;
	char	*hex;
	char	str[40];

	len = ft_count_digits(nbr, base, code);
	i = len;
	hex = "0123456789abcdef";
	if (code == N_HEX_UP)
		hex = "0123456789ABCDEF";
	str[len] = '\0';
	if (nbr == 0)
		str[--len] = '0';
	if (nbr < 0 && base == 10 && code == N_INT)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (nbr > 0)
	{
		str[--len] = hex[nbr % base];
		nbr /= base;
	}
	write(1, str, i);
	return (i);
}

int	ft_putnbr_address(void *ptr)
{
	char			buffer[20];
	int				i;
	int				len;
	unsigned long	address;
	char			*hex;

	address = (unsigned long)ptr;
	if (!address)
		return (ft_putstr("(nil)"));
	hex = "0123456789abcdef";
	len = ft_count_digits(address, 16, N_HEX_LOW);
	buffer[len] = '\0';
	i = len;
	if (!address)
		buffer[0] = '0';
	while (address > 0)
	{
		buffer[--len] = hex[address % 16];
		address /= 16;
	}
	write(1, "0x", 2);
	write(1, &buffer, i);
	return (i + 2);
}
