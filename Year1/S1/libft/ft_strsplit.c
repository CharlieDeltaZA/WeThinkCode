/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:19:37 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/30 15:15:20 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Count doesn't work if string doesn't start with a delim > Recursion, Thanks Cameron
 * Need to code a sub-string length func > DONE
 * Need to code the core of the main func
*/ 

static int	count_words(char const *str, char delim, int index)
{
	int		count;

	if (!(str[index]))
		return (0);
	count = 0;
	while (str[index] == delim)
		index++;
	while (str[index] != '\0' && str[index] != delim)
	{
		index++;
		count = 1;
	}
	return (count + count_words(str, delim, index));
}

// this needs an index starting at the first char that isn't a delim
static int	str_len(char const *str, char delim, int index)
{
	int		len;

	len = 0;
	while (str[index] == delim)
		index++;
	while (str[index] != delim && str[index] != '\0')
	{
		index++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	//TODO
	int		i;
	int		j;
	char	**array;
	int		wcount;
	int		k;

	if (!s || !c) //can I do that?!?!?!
		return (NULL);
	wcount = count_words(s, c, 0);
	if (!(array = (char**)malloc(sizeof(*array) * wcount + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (i++ < wcount)
	{
		k = 0;
		if (!(array[i] = ft_strnew(str_len(s, c, j))))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			array[i][k++] = s[j++];
		array[i][k] = '\0';
	}	
	array[i] = 0;
	return (array);
}
