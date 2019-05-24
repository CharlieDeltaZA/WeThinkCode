/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:44:18 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/24 14:37:22 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	lens1;
	size_t	i;

	i = 0;
	lens1 = (ft_strlen(s1));
	while (s2[i] != '\0' && i < n)
	{
		s1[lens1] = s2[i];
		i++;
		lens1++;
	}
	s1[lens1] = '\0';
	return (s1);
}
