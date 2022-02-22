/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:12 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:12 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;

	len = ft_strlen(src);
	if (len + 1 < size)
		ft_memcpy(dst, src, len + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size-1] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "ahmetcan";
	char s2[] = "fakili";
	printf("%d", ft_strlcpy(s1, s2, 5));
}
*/
