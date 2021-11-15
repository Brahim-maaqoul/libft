/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:22:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/15 16:08:52 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	first(char const *src, char const *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j] && set[i])
	{
		if (src[j] == set[i])
		{
			i = 0;
			j++;
		}
		else
			i++;
	}
	return (j);
}

static size_t	last(char const *src, char const *set)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	while (set[i])
	{
		if (src[j - 1] == set[i])
		{
			i = 0;
			j--;
		}
		else
			i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	size_t	f;
	size_t	i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	f = first(s1, set);
	l = last(s1, set);
	if (f >= l)
		return (ft_strdup(""));
	ptr = (char *) malloc(sizeof(char) * (l - f + 1));
	if (!ptr)
		return (NULL);
	while (f < l)
		ptr[i++] = s1[f++];
	ptr[i] = '\0';
	return (ptr);
}
