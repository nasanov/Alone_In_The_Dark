/* Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
 */

#include <unistd.h>

int        main(int argc, char **argv)
{
    int        	i;
    int        	j;
    int 		ascii[127] = {0};                       // массив печатаемых символов (по ASCII)
    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            if (ascii[(int)argv[1][i]] == 0)     // если встречаем символ, ставим туда 0
            {
                write(1, &argv[1][i], 1);
                ascii[(int)argv[1][i]] = 1;
            }
            i++;
        }
        j = 0;
        while (argv[2][j])
        {
            if (ascii[(int)argv[2][j]] == 0)     // если еще раз встречаем символ (уже стоит 0), ставим туда 1
            {
                write(1, &argv[2][j], 1);
                ascii[(int)argv[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
