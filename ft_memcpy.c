/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:16:48 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/07 16:38:47 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pt1;
	char	*pt2;
	size_t	i;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	pt1 = (char *) dst;
	pt2 = (char *) src;
	while (i < n)
	{
		pt1[i] = pt2[i];
		i++;
	}
	return (pt1);
}
