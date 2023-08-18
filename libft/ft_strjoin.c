/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 08:16:18 by vcamille          #+#    #+#             */
/*   Updated: 2023/02/21 07:56:51 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	int		len;
	int		len2;
	char	*str;	

	if (s1 && s2)
	{
		len = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char *) * (len + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = 0;
		while (s2[i])
			str[len++] = s2[i++];
		str[len] = '\0';
		free(s1);
		return (str);
	}
	return (NULL);
}
