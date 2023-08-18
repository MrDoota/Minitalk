/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 07:56:22 by vcamille          #+#    #+#             */
/*   Updated: 2023/03/07 10:57:18 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = (void *)malloc(nmemb * size);
	if (nmemb > 65535 / size)
		return (NULL);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
