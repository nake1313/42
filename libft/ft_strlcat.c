/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:06 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:06 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*p;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	p = dst + ft_strlen(dst);
	i = size - ft_strlen(dst);
	while (*src && --i)
		*p++ = *src++;
	*p = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
/*
int main()
{
	char s1[50] = "ahmet can";
	char s2[50] = "fakili";
	printf("%d", ft_strlcat(s1, s2, 20));
}
*/
