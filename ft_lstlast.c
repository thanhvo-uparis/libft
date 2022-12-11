/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:23:37 by tvo               #+#    #+#             */
/*   Updated: 2022/12/11 21:41:05 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int i;
	while (lst)
	{
		if (lst->next != NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
int main()
{
	t_list l1;
	t_list l2;
	t_list l3;
	t_list *begin;

	begin = &l1;
	l1.next = &l2;
	l2.next = &l3;
	l3.next = NULL;
	l1.content = "student";
	l2.content = "42";
	l3.content = "Paris";
	printfft_lstlast(begin);
}
*/
