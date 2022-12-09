/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:18:51 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 16:25:13 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t count)
{
	size_t	i;

	if (!ptr)
		return ;
	i = 0;
	while (i < count)
	{
		*(unsigned *)(ptr + i) = 0;
		i++;
	}
}
/*
int	main()
{
	char buffer[10];
	size_t count;

	count = 8;
	ft_bzero(buffer, count);
	buffer[9] = 'a';
	for (int i = 0; i < 10; i++)
		printf("%c", buffer[i]);
	printf("\n");
}
*/
