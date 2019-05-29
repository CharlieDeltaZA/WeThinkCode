/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:31:17 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/29 11:24:05 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_neg(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i = 1;
	return (i);
}

char		*ft_itoa(int n)
{
	//TODO
	int		len;
	int		neg;
	int		i;
	char	*num;
	char	*res;

	len = ft_intlen(n);
	neg = is_neg(n);
	i = 0;
	if (!(num = (char*)malloc(sizeof(char) * (len + neg + 1))))
		return (NULL);
	if (neg == 1)
	{
		num[len] = '-';
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		num[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	res = ft_strrev(num);
	return (res);
}
