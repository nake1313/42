/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:27 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:37:27 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = (void *)content;
	element->next = NULL;
	return (element);
}

// int main()
// {
// 	t_list *list;
// 	list = ft_lstnew("Ahmet Can");
// 	printf("%s", list->content);
// }
