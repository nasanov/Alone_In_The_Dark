#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	if (str == '\0')
		return (0);
	while ((str[i] > 8 && str[i] < 20) || str[i] == ' ')
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}





/*
** int main(void)
** {
** 	printf("%d", ft_atoi("-25639-99b99"));
** 	return (0);
** }
** 
** //(str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
*/