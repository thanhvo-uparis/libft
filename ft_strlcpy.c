/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:11:17 by tvo               #+#    #+#             */
/*   Updated: 2022/11/15 11:26:39 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, char *src, size_t destsize)
{
    size_t srcsize;
    size_t i;

    i = 0;
    if (!dest || !src)
        return (0);
    srcsize = strlen(src);
    if (destsize != 0)
    {
        // il faut etre (destsize - 1)?
        while (src[i] && i < (destsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (srcsize);
}

int     main()
{
    char str1[] = "student42";
    char str2[] = "adce";
    
    printf("%zu \n", ft_strlcpy(str1, str2, 4));
    printf("%s", str1);
}