/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:52 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:37:52 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p1++ != *p2++)
			return (*(p1 - 1) - *(p2 - 1));
	}
	return (0);
}

// int main()
// {
// 	char *str1, *str2;
// 	str1 = "ahmet";
// 	str2 = "canahmet";
// 	printf("%d", ft_memcmp(str1, str2, 3));
// }
