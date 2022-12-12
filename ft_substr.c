/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:51:36 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 18:54:53 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s[i])
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s[start] && (i < len))
	{
		*(unsigned char *)(ptr + i) = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main()
{
	char str[] = "black hole";

	printf("%s", ft_substr(str, 2, 6));
}
*/
