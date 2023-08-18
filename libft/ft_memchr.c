/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:49:47 by vcamille          #+#    #+#             */
/*   Updated: 2023/03/01 15:46:19 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
