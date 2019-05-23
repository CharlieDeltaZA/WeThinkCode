/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:41 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/23 11:57:51 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	//size_t	i;
	int		i;

	i = (ft_strlen(s));
	while (i >= 0 && s[i] != c)
		i--;
	if (!(s[i] == c))
		return (NULL);
	else
		return ((char*)&s[i]);
}
