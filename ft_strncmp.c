/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:40:59 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/12 04:57:20 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	if (n == 0)
		return (0);
	pt1 = (unsigned char *) s1;
	pt2 = (unsigned char *) s2;
	i = 0;
	while (pt1[i] && pt2[i] && pt1[i] == pt2[i] && i < n - 1)
		i++;
	return (pt1[i] - pt2[i]);
}
