/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasanov <nasanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:01:28 by nasanov           #+#    #+#             */
/*   Updated: 2019/12/05 15:16:01 by nasanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	if (*s1 == '\0' || *s2 == '\0')
		return (NULL);
	while (s1[i] != '\0')
	{
		int j = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
				return (char *)s1 + i;
			j++;
		}
		i++;
	}
	return 0;
}

/*
**  #include <stdio.h>
**  #include <string.h>
**
**  int		main(void)
**  {
**  	printf("ft: %s; real: %s\n", \
**  		ft_strpbrk("This is a string to search in", "qxd"), \
**  		strpbrk("This is a string to search in", "qxd")
**  		);
**
**  	printf("ft: %s; real: %s\n", \
**  		ft_strpbrk("This is a string to search in", "sh"), \
**  		strpbrk("This is a string to search in", "sh")
**  		);
**  }
*/
