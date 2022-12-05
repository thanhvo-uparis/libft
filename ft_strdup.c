/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:58:21 by tvo               #+#    #+#             */
/*   Updated: 2022/12/05 17:34:58 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *s)
{
    char *ptr;
    int size;
    int i;

    i = 0;
    size = strlen(s);
    if (!s)
        return (NULL);
    ptr = (char*)malloc(sizeof(char) * (size + 1));
    if (!ptr)
        return (NULL);
    while (s[i])
    {
        *(ptr + i)  =  s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main()
{
    char example[] = "student 42";
    char *target;
}