/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:41:16 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/30 20:40:58 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		k;
	char	*dup;

	i = ft_strlen(s1);
	if (!(dup = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	k = 0;
	while (k < i)
	{
		dup[k] = s1[k];
		k++;
	}
	dup[k] = '\0';
	return (dup);
}
