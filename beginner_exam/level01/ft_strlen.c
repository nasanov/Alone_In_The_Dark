/* Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str); */

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
