/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:56:54 by tvo               #+#    #+#             */
/*   Updated: 2022/12/05 16:57:44 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t sz)
{
    void *ptr;

    ptr = (void *)malloc(count * sz);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count);
    return (ptr);
}

int main()
{
    void *p;
    
    p = ft_calloc(sizeof(int), 5);
}
