#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i >= 0)
			ft_putchar(argv[1][i--]);
	}
	ft_putchar('\n');
	return (0);
}

/*
** int		main(int argc, char *argv[])
** {
** 	if (argc == 2)
** 	{
** 		int i;
** 
** 		i = 0;
** 		while(argv[1][i])
** 			i++;
** 		while(i)
** 			write(1, &argv[1][--i], 1);
** 	}
** 	write(1 ,"\n", 1);
** 	return (0);
** }
*/