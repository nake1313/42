/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:07 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:37:07 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}

// void	func(void *arg)
// {
// 	while(*str)
// 		write(1, arg++, 1);
// }

// int main()
// {
// 	t_list *list;
// 	list = lst_new("Ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	ft_lstadd_back(&list, ft_lstnew("Fakılı"));
// 	ft_lstiter(list, func);
// }
