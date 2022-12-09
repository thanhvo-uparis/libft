/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:17:24 by tvo               #+#    #+#             */
/*   Updated: 2022/11/28 22:17:33 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// char *ft_strnstr(char *s1, char *s2, size_t len)
// {
    
// }

// int main()
// {
//     char str1[] = "hello student42";
//     char str2[] = "student";
//     size_t size = 6;
//     printf("%s", strnstr(str2, str1, size));
// }

char	*ft_strnstr(char *big, char *little, size_t len)
{
    // If little is an empty string, big is returned
    // if little occurs nowhere in	big, NULL is returned
    size_t i;
    int j;
    
    if (!little)
        return (big);
    while (i < len)
    {
        if (big[0] != little[0])
            return (NULL);
        if (big[i] == little[i])
            i++;
        else
            return (NULL);
    }
    return (little);
}

int main(void) {
    char *str1 = "Foo Bar Baz";
    char *str2 = "Bar";
    
    printf("found: %s\n", ft_strnstr(str1, str2, 4) ? "yes" : "no");
    return 0;
}