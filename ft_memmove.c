/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:19:49 by tvo               #+#    #+#             */
/*   Updated: 2022/11/12 10:55:28 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, void *src, size_t n)
{
    size_t  i;

    if (!dest)
        return (0);
    i = 0;
    while (i < n)
    {
        *(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
        i++;
    }
    *(unsigned char*)(dest + n) = '\0';
    return (dest);
}

int main()
{
    char dest[] = "student42";
    char src[] = "abc";
    size_t n;

    n = 2;
    // ft_memmove(dest, src, n);
    memmove(dest, src, n);
    printf("%s", dest);
}