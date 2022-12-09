/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:27:44 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 16:49:03 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str1[] = "stotal42";
	char *p;
	char c;

	c = 't';
	p = ft_strchr(str1, c);
	// printf("result 1 is: %s \n", strchr(str1, c));
	printf("result 2 is: %s", p);
}
*/
