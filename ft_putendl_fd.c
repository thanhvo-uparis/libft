/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:02:15 by tvo               #+#    #+#             */
/*   Updated: 2022/12/08 05:10:58 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, strlen(s));
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
	ft_putstr_fd("WELCOME TO", fd);
	if (close(fd) == -1)
	{
		printf("close() failed!\n");
		return (1);
	}
}