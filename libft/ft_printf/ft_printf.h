/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:44:50 by vcamille          #+#    #+#             */
/*   Updated: 2023/04/11 13:57:27 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> 
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_printnbr(int n);
int	ft_printhexa(unsigned int n, const char format);
int	ft_printptr(unsigned int long n);
int	ft_print_unsigned(unsigned int n);

#endif
