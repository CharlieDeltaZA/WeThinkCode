/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:25 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/22 09:42:20 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
