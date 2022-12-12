/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:11:12 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 17:08:51 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	dst_size;
// 	size_t	src_size;

// 	i = 0;
// 	src_size = strlen(src);
// 	if (size < dst_size + 1)
// 		return (size + src_size);
// 	if (size > dst_size + 1)
// 	{
// 		while (src[i] && dst_size + 1 + i < size)
// 		{
// 			// *(char *)(dst + dst_size + i) = *(char *)(src + i);
// 			dst[dst_size + i] = src[i];
// 			i++;
// 		}
// 	}
// 	dst[dst_size + i] = '\0';
// 	if (dst_size >= size)
// 		dst_size = size;
// 	return (dst_size + src_size);
// }

// int main()
// {
//     char str1[] = "";
//     char str2[] = "lorem ipsum dolor sit amet";
//     printf("MA FONCTION %zu\n", ft_strlcat(str1, str2, 5));
// 	printf("VRAI FONCTION %zu\n", strlcat(str1, str2, 5));
// }

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

