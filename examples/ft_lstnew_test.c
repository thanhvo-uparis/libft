/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:55:21 by tvo               #+#    #+#             */
/*   Updated: 2022/12/11 16:55:23 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
  void *content;
  struct s_list  *next;
} t_list;

t_list    *ft_lstnew(void *content)
{
    t_list *elmt;

    elmt = (t_list *)malloc(sizeof(*elmt));
    if (!elmt)
        return (NULL);
    elmt->content = content;
    elmt->next = NULL;
    return (elmt);
}

int main()
{
  t_list *ptr;
  ptr = ft_lstnew("hello");
  printf("%s", ptr->content);
}
