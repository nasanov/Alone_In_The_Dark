/* Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
llleeeeelAllllllllxxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$> */


#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			letter = 0;
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
			{
				letter = argv[1][i] - 64;
				while (letter != 0)
				{
					write(1, &argv[1][i], 1);
					letter--;
				}
			}
			else if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
            {
				letter = argv[1][i] - 96;
				while (letter != 0)
				{
					write(1, &argv[1][i], 1);
					letter--;
				}
            }
            else
                write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}