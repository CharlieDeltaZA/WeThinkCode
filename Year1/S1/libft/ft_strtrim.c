/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:17:27 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/27 14:20:47 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	//TODO
	char    *nstr;
    size_t  i;
    size_t  l;
    size_t  x;

    if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return ((char*)s);
	i = 0;
    x = 0;
    l = ft_strlen(s) - 1;
    while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
        i++;
    while ((s[l] == '\t' || s[l] == '\n' || s[l] == ' ') && l >= 0)
        l--;
    nstr = (char *)malloc(sizeof(char) * (l - i) + 2);
//	nstr = ft_strnew((l - i) + 1);
    if (nstr == NULL)
        return (NULL);
    while (i <= l)
    {
        nstr[x] = s[i];
        x++;
        i++;
    }
    nstr[x] = '\0';
    return (nstr);
}
