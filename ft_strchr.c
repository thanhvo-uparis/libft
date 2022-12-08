/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:27:44 by tvo               #+#    #+#             */
/*   Updated: 2022/12/07 20:03:04 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	int i;
	
	// ptr = NULL;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// char *ft_strchr(char *str, int c)
// {
//     int i;
//     int size;

//     size = strlen(str);
//     if (!str)
//         return (NULL);
//     i = 0;
//     while(i < size)
//     {
//         if (str[i] == c)
//             return ((char*)str + i);
//         i++;
//     }
// }

int main()
{
	char str1[] = "stotal42";
	char *p;
	char c;

	c = 't';
	p = ft_strchr(str1, c);
	// printf("result 1 is: %s \n", strchr(str1, c));
	printf("result 2 is: %s", p);   
}