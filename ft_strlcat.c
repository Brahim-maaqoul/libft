/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:32:21 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/12 15:52:14 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	cp;

	k = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	cp = i;
	if (i >= l)
		return (j + l);
	while (src[k] && cp < l - 1)
		dst[cp++] = src[k++];
	dst[cp] = '\0';
	return (i + j);
}
