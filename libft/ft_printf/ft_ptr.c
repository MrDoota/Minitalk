/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:25:42 by vcamille          #+#    #+#             */
/*   Updated: 2023/04/13 17:38:42 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr(unsigned int long n)
{
	if (n >= 16)
	{
		ft_ptr(n / 16);
		ft_ptr(n % 16);
	}
	else if (n <= 9)
		ft_putchar(n + 48);
	else
		ft_putchar(n - 10 + 'a');
}

int	ft_printptr(unsigned int long n)
{
	int					i;
	unsigned int long	nb;

	i = 0;
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	nb = n;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	if (nb > 0)
	{
		write(1, "0x", 2);
		i += 2;
	}
	ft_ptr(nb);
	return (i);
}
