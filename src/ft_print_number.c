/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:48:23 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/27 17:38:34 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numberlen(unsigned int a)
{
	int	len;

	len = 0;
	while (a != 0)
	{
		a /= 10;
		len++;
	}
	return (len);
}

char	*ft_unsigned_itoa(unsigned int a)
{
	char	*num;
	int		len;

	len = ft_numberlen(a);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (a != 0)
	{
		num[len - 1] = a % 10 + 48;
		a = a / 10;
		len--;
	}
	return (num);
}

int	ft_turnhex_ptr(unsigned int a, char format)
{
	char	*base;
	int		count;

	count = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (format == 'p')
		count += ft_printstr("0x");
	if (a >= 16)
	{
		ft_turnhex_ptr(a / 16, format);
		ft_turnhex_ptr(a % 16, format);
	}
	else
		count += ft_putchar(base[a]);
	return (count);
}

int	ft_printnumber(int a)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(a);
	len += ft_printstr(num);
	free(num);
	return (len);
}

int	ft_print_unsig_hex(unsigned int a, char format)
{
	int		len;
	char	*num;

	len = 0;
	if (a == 0)
		return (ft_putchar('0'));
	if (format == 'X' || format == 'x' || format == 'p')
		return (ft_turnhex_ptr(a, format));
	else
	{
		num = ft_unsigned_itoa(a);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}
