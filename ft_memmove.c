/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:19:49 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 22:07:07 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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
    char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	// char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	// char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	// char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	// 1 check(ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7)); showLeaks(); //Post 0
	printf("value: %s and s0: %s", ft_memmove(s0, s, 7), s0);
	// 2 check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7)); showLeaks(); //0 move
	// 3 check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7)); showLeaks(); //forward
	// 4 check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7));
}
*/
