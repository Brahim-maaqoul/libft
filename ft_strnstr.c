/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:32:23 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/11 21:33:15 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*p1;
	char	*p2;

	if (*s2 == '\0')
		return ((char *)s1);
	p1 = (char *) s1;
	p2 = (char *) s2;
	i = 0;
	while (p1[i])
	{
		j = 0;
		while (p2[j] && p1[i + j] == p2[j] && (i + j) < n)
		{
			if (p2[j + 1] == '\0')
				return (p1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
