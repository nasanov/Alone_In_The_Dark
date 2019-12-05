#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t		count;

	count = 0;
	while (*s)
	{
		if (ft_strchr(accept, *s))
			count++;
		else
			break;
		s++;
	}
	return (count);
}

size_t	ft_strspn2(const char *s, const char *accept)
{
	const char *s1 = s;
	const char *s2;

	while (*s1)
	{
		s2 = accept;
		while (1)
		{
			if (*s1 == *s2)
				break ;
			else if (*s2++ == '\0')
				return (s1 - s);
		}
		s1++;
	}
	return (s1 - s);
}

/*
** int	main(void)
** {
** 	char haystack[] = "This is a test string";
** 	char accept[] = "tgaThis";
** 
** 	printf("My function %zu\n", ft_strspn(haystack, accept));
** 	printf("My function 2 %zu\n", ft_strspn2(haystack, accept));
** 	printf("Original function %zu\n", strspn(haystack, accept));
** }
*/
