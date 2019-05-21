/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:41 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/21 14:31:35 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// this works but doesn't return null when the char doesn't exist

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	i += 1;

	while (s[i] != c)
		i--;
	if (s[i] == c)
		return ((char*)&s[i]);
	else
		return (NULL);
}
