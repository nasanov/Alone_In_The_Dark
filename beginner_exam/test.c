#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int nbr = 0;
	int sign;

	while(str[i] == ' ' || (str[i] >= 8 && str[i] <= 20))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + str[i++] - '0';
	return nbr * sign;
}

void ft_putnbr(int nbr)
{
	if(nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if(nbr >= 10)
		ft_putnbr(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
}

int is_prime(int nbr)
{
	
}

int main()
{
	printf("%d\n", atoi("123456"));
	printf("%d\n", ft_atoi("123456"));
	ft_putnbr(-123);
	printf("%d", is_prime(5));
	return 0;
}