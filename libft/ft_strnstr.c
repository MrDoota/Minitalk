/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 07:43:38 by vcamille          #+#    #+#             */
/*   Updated: 2023/02/16 08:08:47 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	j = 0;
	while (j < len && big[j])
	{
		i = 0;
		while (j < len && little[i] && big[j] && little[i] == big[j])
		{
			i++;
			j++;
		}
		if (little[i] == '\0')
			return ((char *) &big[j - i]);
		j = j - i + 1;
	}
	return (0);
}
