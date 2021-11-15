/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:50:29 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/11 21:30:43 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*pt;
	size_t	i;

	i = 0;
	pt = (char *) str;
	while (i < n)
	{
		if (pt[i] == (char) c)
			return (&pt[i]);
		i++;
	}
	return (NULL);
}
