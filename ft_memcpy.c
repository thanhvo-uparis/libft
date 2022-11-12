/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:19:16 by tvo               #+#    #+#             */
/*   Updated: 2022/11/12 10:37:09 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest, void *src, size_t n)
{
    size_t  i;

    if (!dest)
        return (0);
    i = 0;
    while (i < n)
    {
        // *(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
        ((unsigned char*)dest)[i] = ((unsigned char*) src)[i];
        i++;
    }
    return (dest);
}

int main()
{
    char dest[] = "coucou42";
    char src[] = "123";
    size_t n = 2;

    // memcpy(dest, src, n);
    ft_memcpy(dest, src, n);
    printf("%s", dest);
}