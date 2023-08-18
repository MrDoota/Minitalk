/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:47:42 by vcamille          #+#    #+#             */
/*   Updated: 2023/02/07 16:32:51 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned int		i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
