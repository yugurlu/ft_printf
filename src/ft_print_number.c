/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:48:23 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/26 14:51:42 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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

int	ft_printnumber(int a)
{
	return (ft_printstr(ft_itoa(a)));
}

int	ft_printunsigned(unsigned int a)
{
	if (a == 0)
		return (ft_putchar('0'));
	return (ft_printstr(ft_unsigned_itoa(a)));
}

int	ft_printadress(void)
{
}
