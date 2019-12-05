/*
** Reproduce the behavior of the function strdup (man strdup).
** 
** Your function must be declared as follows:
** 
** char    *ft_strdup(char *src);
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}