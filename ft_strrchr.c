/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:13:03 by tvo               #+#    #+#             */
/*   Updated: 2022/11/19 19:20:37 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i > 0)
    {
        if (str[i] == c)
            return (&str[i]);
        i--;
    }
    return (NULL);
}

int main()
{
    char *ch = "stotal42";
    char c = 't';
    char *p = strrchr(ch, c);
    
    printf("result is %s", p);
}