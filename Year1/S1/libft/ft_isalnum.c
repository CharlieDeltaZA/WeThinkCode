#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 42) || (ft_isdigit(c) == 42))
		return (42);
	else
		return (0);
}
