/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:09:27 by tvo               #+#    #+#             */
/*   Updated: 2022/12/06 20:49:05 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_wordlen(char *str, char c)
{
    int len;
    while (str[len] && str[len] == c)
        len++;
}

char *ft_newword(char *str)
{

}

int ft_count_string(char *str, char c)
{
    int i;
    int count;

    while (str[i])
    {
        while (str[i] && (str[i] == c))
            i++;
        while (str[i] && (str[i] != c))
            count++;
        
    }
}

char **ft_split(char *s, char c)
{
    int i;
    char **strings;

    
    i = 0;
    strings = (char**)malloc(sizeof(char*) * (ft_count_string(s) + 1));
    while (*s)
    {
        while (*s != '\0' && (*s == c))
            s++;
    }
    if (*s)
    {
        strings[i] = ft_newword(s);
        i++;
    }
} 