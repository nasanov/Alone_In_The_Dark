/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasanov <nasanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:28:20 by nasanov           #+#    #+#             */
/*   Updated: 2019/12/05 15:16:19 by nasanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that reverses (in-place) a string.
It must return its parameter.
Your function must be declared as follows:
char    *ft_strrev(char *str);
 */

#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str)
{
	char    temp;
	int        i;
	int        b;
	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	b = 0;
	while (i > b)
	{
		temp = str[i];
		str[i] = str[b];
		str[b] = temp;
		i--;
		b++;
	}
	return (str);
}

/*
** int		main(void)
** {
** 	char str[] = "hello world";
** 	printf("%s\n",ft_strrev(str));
** 	return (0);
** }
*/