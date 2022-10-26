/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:57:22 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/26 17:12:42 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	findpercentsign(va_list args, char *str)
{
	int	i;
	int	length;

	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
			length += findformat(args, str[i + 1]);
		else
			length += ft_putchar(str[i]);
		i++;
	}
	return (length);
}

int	findformat(va_list args, char c)
{
	int	length;

	if (c == '%')
		length += ft_putchar('%');
	else if (c == 'c')
		length += ft_putchar(va_arg(args, char));
	else if (c == 's')
		length += ft_printstr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		length += ft_printnumber(va_arg(args, int));
	else if (c == 'u')
		length += ft_printunsigned(va_arg(args, unsigned int));
	/*
	else if (c == 'p')
	else if (c == 'x')
	else if (c == 'X')*/
	return (length);
}

int	printf(char *str, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	va_start(args, str);
	result = findpercentsign(args, str);
	va_end(args);
	return (result);
}
