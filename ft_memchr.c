
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*d = (const unsigned char *)s;
	const unsigned char	uc = (unsigned char)c;

	while (n--)
	{
		if (*d == uc)
			return ((void *)d);
		d++;
	}
	return (NULL);
}
