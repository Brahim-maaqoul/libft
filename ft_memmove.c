/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:00:00 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/11 21:09:06 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*x;
	char	*y;
	int		i;

	i = 0;
	x = (char *) dst;
	y = (char *) src;
	if (x > y)
	{
		while (n--)
			x[n] = y[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
