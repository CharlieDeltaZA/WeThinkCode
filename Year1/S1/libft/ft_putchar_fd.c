#include <libft.h>
#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}