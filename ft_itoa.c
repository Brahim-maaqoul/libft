/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:31:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/11/12 01:53:33 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n >= 0 && n <= 9)
		return (len);
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	j;
	int			s;

	len = ft_len(n);
	j = n;
	s = 1;
	if (j < 0)
	{
		j = -j;
		s = -1;
	}
	str = (char *) malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = j % 10 + 48;
		j /= 10;
	}
	if (s < 0)
		str[0] = '-';
	return (str);
}
