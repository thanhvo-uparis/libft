/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:02:34 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 20:47:28 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nb)
{
	int		count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len_nb;
	char	*ptr;

	len_nb = ft_len(n);
	ptr = (char *)malloc(sizeof(char) * (len_nb + 1));
	if (!ptr)
		return (NULL);
	ptr[len_nb--] = '\0';
	if (n == 0)
	{
		ptr[0] = 48;
		return (ptr);
	}
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ptr[len_nb] = (n % 10) + '0';
		n /= 10;
		len_nb--;
	}
	return (ptr);
}
// int	main()
// {
// 	char	*s;

// 	s = ft_itoa(0);
// 	printf("%s", s);
// 	free(s);
// 	return (0);
// }
