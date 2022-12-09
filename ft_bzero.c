/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:18:51 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 21:07:30 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *ptr, size_t count)
{
	size_t	i;

	if (!ptr)
		return ;
	i = 0;
	while (i < count)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
}
/*
int	main()
{
	char tab[100];
	char tab2[100];

	memset(tab, 'A', 100);
	memset(tab2, 'A', 100);

	ft_bzero(tab, 42);
	bzero(tab2, 42);
	// check 1: check(tab[0] == 'A')
	printf("tab[42] : %c \n", tab[0]);
	printf("tab[42] : %c \n", tab2[0]);
	printf("\n--------------------------------------\n\n");
	// check 2: check(i == 42 && tab[42] == 'A')
	int i = 0;
	for (; i < 100 && (tab[i] == 0); i++)
	{
		printf("i = %i, valeur tab[i]: %c \n", i, tab[i]);
	}
	printf("i = %i, tab[i] : %c", i, tab[i]);
	printf("\n");
}
*/
