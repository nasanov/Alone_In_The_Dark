/* Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int is_power_of_2(unsigned int n); */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned long power = 1;

	while (power < n)
		power = 2 * power;

	if (power == n)
		return (1);
	else
		return (0);
}

int		is_power_of_2_bitwise(unsigned int n)
{
    return (n > 0 && !(n & (n - 1)));
}

/*
** int main()
** {
** 	printf("%d", is_power_of_2(262142));
** 	printf("%d", is_power_of_2_bitwise(262142));
** 	return (0);
** }
*/