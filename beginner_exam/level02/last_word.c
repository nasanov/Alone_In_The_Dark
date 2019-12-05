/* Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

#include <unistd.h>

int        main(int ac, char **av)
{
    int        i;
    int        j;
    i = 0;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (av[1][i] != '\0')
        i++;
    i--;
    while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
        i--;
    j = i;
    while (i >= 0 && (av[1][i] != ' ' || av[1][i] != '\t'))
    {
        if (av[1][i - 1] == ' ' || av[1][i - 1] == '\t')
            break ;
        i--;
    }
    while (i >= 0 && i <= j)
    {
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}


/*
** #include <unistd.h>
** 
** int     main(int argc, char *argv[])
** {
**     int i;
**     int count;
** 
**     i = 0;
**     count = 0;
**     if (argc != 2)
**         write(1, "\n", 1);
**     else
**     {
**         while(argv[1][i] != '\0')
**             i++;
**         i--;
**         while(argv[1][i] == ' ' || argv[1][i] == '\t')
**             i--;
**         while(argv[1][i] >= 33 && argv[1][i] <= 126)
**         {
**             i--;
**             count++;
**         }
**         i++;
**         while(count--)
**         {
**             write(1, &argv[1][i], 1);
**             i++;
**         }
**         write(1, "\n", 1);
**     }
** 
**     return (0);
** }
*/
