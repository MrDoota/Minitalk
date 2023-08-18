/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:10:47 by vcamille          #+#    #+#             */
/*   Updated: 2023/02/16 17:55:13 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = NULL;
	while (s[i])
	{
		if (s[i] == c)
			ret = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (ret);
}
