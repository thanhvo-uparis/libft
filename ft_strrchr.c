/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:13:03 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 16:59:44 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;

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
/*
int main()
{
    char *ch = "stotal42";
    char c = 't';:w
    char *p = strrchr(ch, c);

    printf("result is %s", p);
}*/
