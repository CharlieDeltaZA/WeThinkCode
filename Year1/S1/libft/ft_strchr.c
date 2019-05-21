/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:39:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/21 14:29:34 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// this works but doesn't return null when the char doesn't exist

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != c)
		i++;
	if (s[i] == c)
		return ((char*)&s[i]);
	else
		return (NULL);
}
