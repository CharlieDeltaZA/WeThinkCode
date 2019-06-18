/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:27:38 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/18 16:45:40 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// REMOVE ME vvv
#include <fcntl.h>
#include <stdio.h>

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

int			get_next_line(const int fd, char **line)
{
	//TODO
	int			ret;
	char		buffer[BUFF_SIZE + 1];
	static char *str;
	char		*tmp;
	char		*extra;
	size_t		i;

	if (line == NULL)
		return (-1);

	str = ft_strdup("");
	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		tmp = ft_strjoin(str, buffer);
		free(str);
		str = tmp;
		//strchr
		if (ft_strchr(buffer, '\n'))
		{
			i = find_n(str);
			if (str[i] == '\n')
			{
				*line = ft_strsub(str, 0, i);
				extra = ft_strdup(str + 1 + i);
				free(str);
				str = extra;
				tmp = extra;
				printf("reeeeee");
				//return (1);
			}
			else if (str[i] == '\0')
			{
				if (ret == BUFF_SIZE)
					return (get_next_line(fd, line)); //?
				*line = ft_strdup(str);
				printf("REEE");
				//return (1);
			}
			printf("REEE");
			return (1);
			//printf("REEE");
		}
	}
		return (0);
	// > *line = copyuntil \n character.
	// > tmp = str;
	// > str = (strdup) str + \n location + 1
	// > free(tmp);
	//printf("%s\n", str);
	//return (0);
}

// Declaring, allocating & passing an empty var **line to store lines found by gnl
// Looping as long as gnl returns 1
// opens file "test.txt" for read.

int		main(void)
{
	char	**line;
	int		gnl_ret = 1;
	int		fd;

	fd = open("test2.txt", O_RDONLY);
	line = malloc(sizeof(char**));
	while ((gnl_ret = get_next_line(fd, line)) > 0)
	{
		printf("%s\n", *line);
		free(*line);
	}
	close(fd);
	printf("\nFIN :)\n");
	return (0);
}
