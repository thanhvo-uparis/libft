/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:13:17 by tvo               #+#    #+#             */
/*   Updated: 2022/12/01 13:43:57 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_atoi(char *chaine)
{
        int len;
        int signe;

        signe = 0;
        len = strlen(chaine);
        for (int i = 0; i < len; i++)
        {
            if (chaine[i] == 45)
            {  
                signe *= -1;
                i++;
            }
            if (chaine[i] == 43)
                i++;
            
        }
        
}

int main()
{
    char str1[] = "-4623++";
    
    printf("%d", atoi(str1));
}