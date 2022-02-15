/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:47 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:36:47 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *list;
// 	list = ft_lstnew("can");
// 	ft_lstadd_front(&list, ft_lstnew("ahmet"));
// 	ft_lstadd_back(&list, ft_lstnew("fakılı"));
// }
