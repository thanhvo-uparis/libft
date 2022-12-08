/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:10:38 by tvo               #+#    #+#             */
/*   Updated: 2022/12/08 05:18:16 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_abs(int nb)
{
	return ((nb < 0) ? (-1 * nb) : nb);
}

void ft_putnbr_fd(int n, int fd)
{
	
}

int 	main()
{
	int fd;

	fd = open("/mnt/nfs/homes/tvo/Downloads/new_test.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("open() failed!\n");
		return (1);
	}
	ft_putnbr_fd(3571, fd);
	if (close(fd) == -1)
	{
		printf("close() failed!\n");
		return (1);
	}
}