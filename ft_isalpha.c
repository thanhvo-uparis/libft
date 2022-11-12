/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:59:12 by tvo               #+#    #+#             */
/*   Updated: 2022/11/10 23:37:05 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c) 
{
   return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int main(void)
{
    printf("%d", ft_isalpha(65));
    return (0);
}