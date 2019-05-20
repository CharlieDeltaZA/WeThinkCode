#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int i;
	int k;
	char *dup;

	i = ft_strlen(s1);
	dup = (char*)malloc(sizeof(char) * (i + 1));
	k = 0;
	while (k < i)
	{
		dup[k] = s1[k];
		k++;
	}
	dup[k] = '\0';
	return (dup);	
}
