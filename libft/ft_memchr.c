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
	unsigned char	*tmp_s;
	unsigned char	tmp_c;

	tmp_s = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (num--)
	{
		if (*tmp_s++ == tmp_c)
		{
			return (tmp_s - 1);
		}
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
