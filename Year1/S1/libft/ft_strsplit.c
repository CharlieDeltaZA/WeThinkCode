/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:19:37 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/30 12:17:36 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
static int	str_len(char *str, char delim, int index)
{
	int		len;

	len = 0;
	while (str[index] != delim)
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
	int		count;

	
}
