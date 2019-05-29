/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:31:17 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/29 10:40:56 by cdiogo           ###   ########.fr       */
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

	len = ft_intlen(n);
	neg = is_neg(n);
	i = 0;
	if (!(num = (char*)malloc(sizeof(char) * (len + neg + 1))))
		return (NULL);
	if (neg == 1)
	{
		str[i] == '-';
		i++;
	}
	
}
