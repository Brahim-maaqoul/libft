/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:24:39 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/12 04:56:00 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	ptr1 = (unsigned char *) str1;
	ptr2 = (unsigned char *) str2;
	while (i < n - 1 && ptr1[i] == ptr2[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
