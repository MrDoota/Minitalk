/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:11:43 by vcamille          #+#    #+#             */
/*   Updated: 2023/04/11 13:52:48 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_hexa(n / 16, format);
		ft_hexa(n % 16, format);
	}
	else if (n <= 9)
		ft_putchar(n + 48);
	else
	{
		if (format == 'x')
			ft_putchar(n - 10 + 'a');
		if (format == 'X')
			ft_putchar(n - 10 + 'A');
	}
}

int	ft_printhexa(unsigned int n, const char format)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = n;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	ft_hexa(n, format);
	return (i);
}
