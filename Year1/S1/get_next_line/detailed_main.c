#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd;
    int fd2;
    char **line;
    int gnlret;
    int linecount;

    int fds[300];

    printf("Argc: %d\n", argc);
    if (argc == 1)
        fd = 0;
    else
    {
        int i = -1;
        while (++i < 300)
        {
            fds[i] = open(argv[1], O_RDONLY);
        }
        i = -1;
        while (++i < 300 - 2)
        {
            close(fds[i]);
        }
        fd = fds[299];
        fd2 = fds[298];
        printf("%d\n", fd);
        printf("File to open: %s\n", argv[1]);
    }
    linecount = 0;
    gnlret = 1;
    line = ft_memalloc(sizeof(char **));
    printf("BUFF_SIZE: %d\n\n\n", BUFF_SIZE);
    while ((gnlret = get_next_line(fd, line)) > 0)
    {
        printf("%s\n", *line);
        free(*line);
        if (linecount % 2 == 0)
        {
            get_next_line(fd2, line);
            printf("FD2: %s\n", *line);
            free(*line);
        }
        linecount++;
    }
    printf("Line count: %d\n", linecount);
    printf("Finished\n\n");
    close(fd);
    return (0);
}
