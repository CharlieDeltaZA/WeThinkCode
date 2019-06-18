/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:27:38 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/18 10:22:14 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

// REMOVE ME vvv
#include <fcntl.h>
#include <stdio.h>

// Passed empty pointer to a pointer for a string. This is reinitialised each time
// Passed an fd that doesn't change.
// Read the fd with read()
//

int			get_next_line(const int fd. char **line)
{
	//TODO
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
