#include <string.h>

size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t i = 0;
	size_t j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (s[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	char haystack[] = "This is a testing string";
** 	char accept[] = "tga";
** 
** 	printf("%zu\n", ft_strcspn(haystack, accept));
** }
*/