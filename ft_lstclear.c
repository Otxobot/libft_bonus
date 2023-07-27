/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:31:06 by otxoboy           #+#    #+#             */
/*   Updated: 2023/07/26 14:33:41 by otxoboy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    while (*lst != NULL)
    {
        tmp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        (*lst) = tmp;
    }
}
