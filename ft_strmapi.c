/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:02:52 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/12 05:31:11 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*pt;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	pt = (char *) malloc(sizeof(char) * (i + 1));
	if (!pt)
		return (NULL);
	i = 0;
	while (s[i])
	{
		pt[i] = f(i, s[i]);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
