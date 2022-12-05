/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:30:22 by tvo               #+#    #+#             */
/*   Updated: 2022/12/05 21:05:06 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_exist(char *s1, char *set)
{
    
    
}

char *ft_strtrim(char *s1, char *set)
{
    int i;
    char *ptr;

    i = 0;
    ptr = (char*)malloc(sizeof(*s1) * (strlen(s1) + 1));
    if (!ptr)
        return (NULL);
    while (s1[i])
    {
        
    }
}

int main()
{
    
}