/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:55:17 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/27 16:54:48 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char *str, ...);
int		findpercentsign(va_list args, char *str);
int		findformat(va_list args, char c);
int		ft_putchar(char c);
int		ft_printstr(char *a);
int		ft_printnumber(int a);
int		ft_print_unsig_hex(unsigned int a, const char format);
int		ft_numberlen(unsigned int a);
int		ft_turnhex_ptr(unsigned int a, char format);
char	*ft_int_to_asci(long nb, size_t count, int flag);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(unsigned int a);
size_t	ft_int_len(long nb);
#endif
