#include <libft.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	while (str[i] != '\0')
		i++;
	return (i);
}
