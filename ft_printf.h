/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:55:17 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/26 12:57:47 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
# define FT_PRINTF .H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char *str, ...);
int		findpercentsign(va_list args, char *str);
int		findformat(va_list args, char c);
int		ft_putchar(char c);
int		ft_printstr(char *str);
int		ft_printnumber(int a);
int		ft_printunsigned(unsigned int a);
int		ft_numberlen(int a);
char	*ft_unsigned_itoa(unsigned int a);

#endif
