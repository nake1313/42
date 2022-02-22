/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:59 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:37:59 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;
	if (dest == src)
		return (d);
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "ahmetcandeneme";
	char str2[] = "istanbul";
	printf("%s", (char *)ft_memcpy(str1, str2, 8));
}
*/
