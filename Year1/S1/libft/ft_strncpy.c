/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:53:03 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/23 21:42:03 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// I don't think this handles src being < len char long
// Also needs to handle not terminating the dst if no space in *dst

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t srclen;
	size_t dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
//	while (src[i] != '\0' && (i < len))
//	{
//		dst[i] = src[i];
//		i++;
//	}
//	dst[i] = '\0';
	while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	if (srclen < len)
		{
			while (dstlen >= len)
			{
				dst[dstlen] = '\0';
				dstlen--;
			}
		}
	return (dst);
}
