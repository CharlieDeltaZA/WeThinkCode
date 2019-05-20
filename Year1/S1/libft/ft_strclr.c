#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	i = 0;
	while (i < ft_strlen(s))
	{
		s[i] = '\0';
		i++;
	}
}
