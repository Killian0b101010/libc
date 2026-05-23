
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s = (const unsigned char *)s1;
	const unsigned char	*t = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (s[i] != t[i])
			return (s[i] - t[i]);
		i++;
	}
	return (0);
}
