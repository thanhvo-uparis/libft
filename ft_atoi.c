/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:58:52 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 16:31:36 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	signe;

	i = 0;
	res = 0;
	if (!str)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	signe = (str[i] == 45) ? -1 : 1;
	i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}

	return (signe * res);
}
/*
int main()
{
    char str1[] = "-4532";

    printf("%d", ft_atoi(str1));
}
*/
