/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:06:12 by vcamille          #+#    #+#             */
/*   Updated: 2023/04/07 17:46:30 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (n == 0)
		i++;
	if (n <= 9)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else
	{
		ft_print_unsigned(n / 10);
		ft_print_unsigned(n % 10);
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
