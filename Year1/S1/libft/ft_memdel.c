#include "libft.h"

void	ft_memdel(void **ap)
{
	void *ptr;

	ptr = *ap;
	free(ptr);
	**ap = NULL;
}
