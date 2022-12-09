/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:19:49 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 16:44:44 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;

	if (!dest)
		return (0);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	*(unsigned char *)(dest + n) = '\0';
	return (dest);
}
/*
int main()
{
    char str[50] = "C learning is good";
    printf("before: %s \n", str);
    memmove(str, &str[5], 10);
    printf("after: %s", str);
}
*/
