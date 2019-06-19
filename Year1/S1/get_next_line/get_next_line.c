/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:27:38 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/19 13:37:26 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Passed empty pointer to a pointer for a string. This is reinitialised each time
// Passed an fd that doesn't change.
// Read the fd with read()
//

static size_t	find_n(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

static int		newline(const int fd, char **line, int ret, char *str)
{
	char	*extra;
	size_t	i;

	i = find_n(str);
	if (str[i] == '\n')
	{
		*line = ft_strsub(str, 0, i);
		extra = ft_strdup(str + 1 + i);
		free(str);
		str = extra;
		if (str[0] == '\0')
			ft_strdel(&str);
		//return (1);
	}
	else if (str[i] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line)); //?
		*line = ft_strdup(str);
		ft_strdel(&str);
		//return (1);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	//TODO
	int			ret;
	char		buffer[BUFF_SIZE + 1];
	static char *str;
	char		*tmp;
//	char		*extra;
//	size_t		i;

	if (line == NULL)
		return (-1);

	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		if (str == NULL)
			str = ft_strdup("");
		buffer[ret] = '\0';
		tmp = ft_strjoin(str, buffer);
		free(str);
		str = tmp;
		if (ft_strchr(buffer, '\n'))
		{
	//		i = find_n(str);
			break ;
			//return(newline(fd, line, ret, str, i));
/*			if (str[i] == '\n')
			{
				*line = ft_strsub(str, 0, i);
				extra = ft_strdup(str + 1 + i);
				free(str);
				str = extra;
	//			return (1);
			}
			else if (str[i] == '\0')
			{
				if (ret == BUFF_SIZE)
					return (get_next_line(fd, line)); //?
				*line = ft_strdup(str);
	//			return (1);
			} 
			return (1);
	*/	} 
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0)
		return (0);
	return (newline(fd, line, ret, str));
	// > *line = copyuntil \n character.
	// > tmp = str;
	// > str = (strdup) str + \n location + 1
	// > free(tmp);
	//printf("%s\n", str);
	//return (0);
}
