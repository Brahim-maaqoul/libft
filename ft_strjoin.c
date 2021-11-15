/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:33:53 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/08 10:01:22 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		k;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	k = ft_strlen(s1) + ft_strlen(s2);
	t = (char *) malloc(sizeof(char) * (k + 1));
	if (!t)
		return (NULL);
	while (s1[i])
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		t[i++] = s2[j];
		j++;
	}
	t[i] = '\0';
	return (t);
}
