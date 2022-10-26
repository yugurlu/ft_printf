/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:55:17 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/26 10:54:03 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
# define FT_PRINTF .H

# include <libft.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char *str, ...);
int	ft_putchar(char c);
int	ft_printstr(char *str);

#endif
