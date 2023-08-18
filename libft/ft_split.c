/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:08:28 by vcamille          #+#    #+#             */
/*   Updated: 2023/03/10 08:28:49 by vcamille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	if (*s != c && *s)
	{
		cnt++;
		s++;
	}
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			cnt++;
		s++;
	}
	return (cnt);
}

static int	len_nxt_wd(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s != c && *s)
	{
		cnt++;
		s++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		nb_wd;
	int		j;
	int		i;

	if (!s)
		return (NULL);
	nb_wd = nb_words(s, c);
	arr = (char **)malloc((nb_wd + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	j = 0;
	while (j < nb_wd)
	{
		while (*s == c && *s)
			s++;
		arr[j] = (char *) malloc(len_nxt_wd(s, c) + 1);
		i = 0;
		while (*s != c && *s)
			arr[j][i++] = *s++;
		arr[j++][i] = 0;
	}
	arr[j] = NULL;
	return (arr);
}
