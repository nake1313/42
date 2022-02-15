/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:35:26 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:35:26 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t nbyte)
{
	ft_memset(ptr, 0, nbyte);
}

// int main()
// {
// 	int arr[5] = {1,2,3,4,5};
// 	ft_bzero(&arr, 12);
// 	printf("%d,%d,%d,%d", arr[0],arr[1],arr[2],arr[3]);
// }
