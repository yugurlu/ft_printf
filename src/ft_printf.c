/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:57:22 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/25 18:59:02 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	findformat(char c)
{
	int result2;

	if (c == '%')

	else if(c == 'i' || c == 'd')

	else if(c == 'c')

	else if(c == 's')

	else if(c == 'p')

	else if(c == 'u')

	else if(c == 'x')

	else if(c == 'X')



	return (result2);
}

int	printf(char *str, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	va_start(args, str);
	result = (ft_strlen(str) - ft_strchr(str, '%')) + findformat(ft_strchr(str, '%') + 1);
	va_end(args);
	return (result);
}
