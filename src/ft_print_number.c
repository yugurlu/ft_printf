/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:48:23 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/26 11:32:03 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int a)
{
	char	*c;

	c = ft_itoa(a);
	ft_printstr(c);
	return (ft_strlen(c));
}

int ft_printadress()
{

}
