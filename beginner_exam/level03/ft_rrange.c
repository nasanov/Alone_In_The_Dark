/*
** Assignment name  : ft_rrange
** Expected files   : ft_rrange.c
** Allowed functions: malloc
** ---------------------------------------------------------------------------
**
** Write the following function:
**
** int     *ft_rrange(int start, int end);
**
** It must allocate (with malloc()) an array of integers, fill it with consecu
** values that begin at end and end at start (Including start and end !), then
** return a pointer to the first value of the array.
**
** Examples:
**
** - With (1, 3) you will return an array containing 3, 2 and 1
** - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
** - With (0, 0) you will return an array containing 0.
** - With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

int		*ft_rrange(int start, int end)
{
	int		*rrange;
	int		i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		end += (start > end) ? 1 : -1;
	}
	rrange[i] = end;
	return (rrange);
}

/*
** #include <stdlib.h>
**
** int     *ft_rrange(int start, int end)
** {
** 	int	*range;
** 	int	len;
**
** 	len = (end >= start) ? end - start + 1 : start - end + 1;
** 	if (!(range = (int *)malloc(sizeof(int) * len)))
** 		return (NULL);
** 	int i = 0;
** 	while (i <= len)
** 		range[i++] = (end >= start) ? end-- : end++;
** 	return (range);
** }
*/

int		main(void)
{
	int *r;

	r = ft_rrange(1, 5);
	printf("%d\n", r[0]);
	printf("%d\n", r[1]);
	printf("%d\n", r[2]);
	printf("%d\n", r[3]);
	printf("%d\n", r[4]);
	return (0);
}