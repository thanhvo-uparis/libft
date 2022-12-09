/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:34:48 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 00:22:07 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct  t_list
{
    int     i;
    char    *str;
    struct t_list *next;
};

void    aff_list(struct t_list *begin)
{
    while (begin)
    {
        printf("%s\n", begin->str);
        begin = begin->next;
    }
}

int main()
{
    struct t_list elm1;
    struct t_list elm2;
    struct t_list elm3;
    struct t_list *begin;

    begin = &elm1;
    elm1.next = &elm2;
    elm2.next = &elm3;
    elm3.next = 0;
    elm1.str = "element1";
    elm2.str = "element2";
    elm3.str = "black hole!!";
    aff_list(begin);
}