#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (42);
	else
		return (0);
}
