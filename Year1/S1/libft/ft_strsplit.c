/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:19:37 by cdiogo            #+#    #+#             */
/*   Updated: 2019/05/30 11:59:09 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Count doesn't work if string doesn't start with a delim
 * Need to code a sub-string length func > DONE
 * Need to code the core of the main func
*/ 

static int	count_words(char const *s, char d)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] == d)
		i++;
	else
	{
		count++;
		while (!(ft_iswhitespace(s[i]) && s[i] && s[i] != d))
			i++;
	}

//	if (s[i] == '\0')
//		count = 1;
	return (count);
}
// this needs an index starting at the first char that isn't a delim
static int	str_len(char *str, char d, int index)
{
	int		len;

	len = 0;
	while (str[index] != d)
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
