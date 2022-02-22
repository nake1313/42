/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:46 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:37:46 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (num--)
	{
		if (*p++ == (unsigned char)c)
			return (p - 1);
	}
	return (NULL);
}

// int main()
// {
// 	char *str;
// 	int c = 'f';
// 	str = "ahmetcanfakili";
// 	printf("%s", ft_memchr(str, c, 11));
// }
