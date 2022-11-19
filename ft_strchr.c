/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:27:44 by tvo               #+#    #+#             */
/*   Updated: 2022/11/19 16:37:12 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// char *ft_strchr(char str, int c)
// {
//     char *ptr;
//     int size;
//     int i;

//     i = 0;
//     size = strlen(str);
//     printf("%d", size);
//     while (i < size)
//     {
//         if (str[i] == c)
//         {
//             ptr = &str[i];
//             break ;
//         }
//         else
//             i++;
//     }
//     return (ptr);
    
// }

int main()
{
    char str1[] = "student42";
    char *p;
    char c;

    c = 116;
    p = strchr(str1, c);
    printf("result: %s", strchr(str1, c));
    printf("result: %s", p);
    // p = ft_strchr(str1, c);
}