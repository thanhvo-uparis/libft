/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:00:37 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 18:55:53 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		total_size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	total_size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (total_size + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		*(ptr + j) = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		*(ptr + j) = s2[i];
		j++;
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
int main()
{
    char str1[] = "I don't like";
    char str2[] = "blackhole";

    printf("%s", ft_strjoin(str1, str2));
}
*/
