/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:17:24 by tvo               #+#    #+#             */
/*   Updated: 2022/12/10 23:42:22 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// If little is an empty string, big is returned
// if little occurs nowhere in	big, NULL is returned
char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;

	if (!big || !little)
		return (NULL);
	while (i < len)
	{
		if (big[0] != little[0])
			return (NULL);
		if (big[i] == little[i])
			i++;
		else
			return (NULL);
	}
	return (little);
}
/*
#include <bsd/string.h>
int main(void) {
    char *str1 = "Foo Bar Baz";
    char *str2 = "Bar";

    printf("found: %s\n", strnstr(str1, str2, 4) ? "yes" : "no");
    return 0;
}*/

