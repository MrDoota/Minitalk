/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:17:10 by vcamille          #+#    #+#             */
/*   Updated: 2023/04/13 17:47:30 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (n <= 9)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_printnbr(int n)
{
	int	i;
	int	nbr;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
		i++;
	}
	if (n == 0)
		i++;
	nbr = n;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	ft_putnbr(n);
	return (i);
}
