#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;
	size_t i;

	i = 0;
	ptr = (char*)malloc(sizeof(*ptr) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (i <= size)
		{
			str[i] = '\0';
			i++;
		}
		str[i] = '\0';
		return (ptr);
}
