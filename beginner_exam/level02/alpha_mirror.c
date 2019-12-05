/* 
** Write a program called alpha_mirror that takes a string and displays this string
** after replacing each alphabetical character by the opposite alphabetical
** character, followed by a newline.
** 
** 'a' becomes 'z', 'Z' becomes 'A'
** 'd' becomes 'w', 'M' becomes 'N'
** 
** Case is not changed.
** 
** If the number of arguments is not 1, display only a newline.
** 
** Examples:
** 
** $>./alpha_mirror "abc"
** zyx
** $>./alpha_mirror "My horse is Amazing." | cat -e
** Nb slihv rh Znzarmt.$
** $>./alpha_mirror | cat -e
** $
** $>
*/


#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if ('A' <= argv[1][i] && 'Z' >= argv[1][i])
				letter = 'Z' - argv[1][i] + 'A';
			if ('a' <= argv[1][i] && 'z' >= argv[1][i])
				letter = 'z' - argv[1][i] + 'a';
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}