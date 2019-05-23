/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:31 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/23 09:25:39 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (i + j >= len || needle[j + i] == needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
