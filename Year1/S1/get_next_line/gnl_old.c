/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:18:49 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/13 12:14:19 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Appends single line to storage buffer `line`. We determine line length by
** incrementing `len` until we find a '\n' or '\0'. If we find these chars we
** assume we have a line, so we save that length of `str` to `line`, and store
** the rest of `str` in a `temp` buffer. We free `str` and reassign it to the
** contents of temp buffer to keep pos in `str`.
*/

static int	new_line(char **str, char **line, const int fd, int ret)
{
	char	*temp;
	size_t	len;

	len = 0;
	while (str[fd][len] != '\n' && str[fd][len] != '\0')
		len++;
	if (str[fd][len] == '\n')
	{
		*line = ft_strsub(str[fd], 0, len);
		temp = ft_strdup(str[fd] + len + 1);
		free(str[fd]);
		str[fd] = temp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (TRUE);
}

/*
** 
*/

int			get_next_line(const int fd, char **line)
{
	int			ret;
	char		*temp;
	char		buff[BUFF_SIZE + 1];
	static char	*str[42];

	if (fd < 0 || line == NULL || read(fd, NULL, 0) < 0)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == NULL || str[fd] == '\0'))
		return (FALSE);
	return (new_line(str, line, fd, ret));
}