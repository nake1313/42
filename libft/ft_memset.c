/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:03 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:39:03 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)arr;
	while (n--)
		*tmp++ = c;
	return (arr);
}

// int main()
// {
// 	char str[] = "ahmet ";
// 	char a = 'x';
// 	printf("%s", ft_memset(str, a, 3));
// }
