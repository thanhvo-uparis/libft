/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:30:22 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 17:02:34 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_exist(char ch, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (ch == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char *set)
{
	int	i;
	int	debut;
	int	fin;
	char	*ptr;

	i = 0;
	debut = 0;
	while (s1[debut] && (is_exist(s1[debut], set)))
		debut++;
	fin = strlen(s1);
	while (s1[fin - 1] && (fin > debut) && (is_exist(s1[fin - 1], set)))
		fin--;
	ptr = (char *)malloc(sizeof(*s1) * (fin - debut + 1));
	if (!ptr)
		return (NULL);
	while (debut < fin)
	{
		*(ptr + i) = s1[debut];
		i++;
		debut++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
    char chaine[] = "black hole";
    char list_set[] = "bke";

    printf("%s", ft_strtrim(chaine, list_set));
}
*/
