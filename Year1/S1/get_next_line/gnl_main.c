#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	char	**line;
	int		gnl_ret = 1;
	int		fd;

	fd = open("short_test.txt", O_RDONLY);
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
