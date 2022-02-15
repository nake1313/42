/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:01 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:37:01 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
	else
		return ;
}

// void del(void *arg)
// {
// 	free(arg);
// }

// int main()
// {
// 	t_list *list;
// 	t_list *next;
// 	list = ft_lstnew("Ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	next = list->next;
// 	ft_lstdelone(list, del);
// 	printf("%d", list->content);
// }
