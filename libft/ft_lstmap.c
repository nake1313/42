/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:19 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:37:19 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	result = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}

// void del(void *arg)
// {
// 	free(arg);
// }

// void *func(void *arg)
// {
// 	printf("%s", arg);
// }

// int main()
// {
// 	t_list *list;
// 	t_list *newlist;

// 	list = ft_lstnew("Ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	ft_lstadd_back(&list, ft_lstnew("Fakılı"));
// 	newlist = ft_lstmap(list, func, del);
// }
