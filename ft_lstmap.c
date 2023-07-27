/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:35:55 by otxoboy           #+#    #+#             */
/*   Updated: 2023/07/26 16:03:47 by otxoboy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
    t_list  *new;
    t_list  *tmp;

    if (!lst)
        return (NULL);
    new = ft_lstnew(f(lst->content));
    temp = new;
    lst = lst->next;
    while (lst)
    {
        tmp->next = ft_lstnew(f(lst->content));
        if (tmp->next == NULL)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        tmp = tmp->next;
        lst = lst->next;
    }
    tmp->next = NULL;
    return (new);
}
