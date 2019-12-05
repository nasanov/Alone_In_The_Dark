/* Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0. */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);

	int max = tab[0];
	unsigned int i = 1;

	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		++i;
	}
	return (max);
}

/*
** int main()
** {
** 	int i[] = {1, 2, 3, 4, 23, 234, 12, 5};
** 	printf("%d", max(i, 8));
** }
*/