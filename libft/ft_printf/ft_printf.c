/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:47:14 by vcamille          #+#    #+#             */
/*   Updated: 2023/04/14 17:58:25 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form(va_list args, const char str)
{
	int	result;

	result = 0;
	if (str == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (str == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (str == 'p')
		result += ft_printptr(va_arg(args, unsigned int long));
	else if (str == 'i' || str == 'd')
		result += ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		result += ft_print_unsigned(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		result += ft_printhexa(va_arg(args, unsigned int), str);
	else if (str == '%')
		result += write(1, "%", 1);
	return (result);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			result += ft_form(args, format[i + 1]);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (result);
}
