#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = (size_t)ft_strlen(dest);
	src_len = (size_t)ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[12] = "Hello";
    size_t total_size;

	printf("%s\n",buffer);
    total_size = ft_strlcat(buffer, "World", 2);

    printf("Buffer après strlcat : \"%s\"\n", buffer);
    printf("Longueur totale nécessaire : %zu\n", total_size);

    return 0;
}
