/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:27:38 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/20 11:10:48 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Passed empty pointer to a pointer for a string. This is reinitialised each time
// Passed an fd that doesn't change.
// Read the fd with read()
//

static size_t	find_n(char **str, const int fd)
{
	size_t	i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	return (i);
}

static int		newline(const int fd, char **line, int ret, char **str)
{
	char	*extra;
	size_t	i;

//	i = 0;
//	while (str[fd][i] != '\n' && str[fd][i] != '\0')
//		i++;
	i = find_n(str, fd);
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		extra = ft_strdup(str[fd] + 1 + i);
		free(str[fd]);
		str[fd] = extra;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line)); //?
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	//TODO
	int			ret;
	char		buffer[BUFF_SIZE + 1];
	static char *str[64];
	char		*tmp;
//	char		*extra;
//	size_t		i;

	if (fd < 0 || line == NULL)
		return (-1);

	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		if (str[fd] == NULL)
			str[fd] = ft_strdup("");
//			str = ft_strnew(1);
		buffer[ret] = '\0';
		tmp = ft_strjoin(str[fd], buffer);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buffer, '\n'))
		{
//			i = find_n(str, fd);
			break ;
/*			if (str[fd][i] == '\n')
			{
				*line = ft_strsub(str[fd], 0, i);
				extra = ft_strdup(str[fd] + 1 + i);
				free(str[fd]);
				str[fd] = extra;
			}
			else if (str[fd][i] == '\0')
			{
				if (ret == BUFF_SIZE)
					return (get_next_line(fd, line)); //?
				*line = ft_strdup(str[fd]);
			} 
			return (1); */
		} 
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == NULL || str[fd] == '\0'))
		return (0);
	return (newline(fd, line, ret, str));
//	return (1);
													// > *line = copyuntil \n character.
													// > tmp = str;
													// > str = (strdup) str + \n location + 1
													// > free(tmp);
}
