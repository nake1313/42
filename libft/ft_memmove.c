/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:38:05 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:38:05 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	d = dest;
	s = src;
	if (s < d)
	{
		while (n--)
			*(d+n) = *(s+n);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "HelloWorld";
	printf("%s\n", (char *)ft_memmove(str1+2, str1, 5));
	printf("%s\n", (char *)memmove(str1+2, str1, 5));
}
*/
