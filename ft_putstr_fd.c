/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 04:43:14 by tvo               #+#    #+#             */
/*   Updated: 2022/12/08 05:01:21 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	int		i;
// 	int		str_len;

// 	i = 0;
// 	str_len = strlen(s);
// 	while (i < str_len)
// 	{
// 		ft_putchar_fd(s[i], fd);
// 		i++;
// 	}
// }

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