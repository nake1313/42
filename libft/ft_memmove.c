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

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*tmp_dest;
	char	*tmp_src;

	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	if (tmp_src < tmp_dest)
	{
		while (len--)
			tmp_dest[len] = tmp_src[len];
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

// int main()
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "NiceCode";
//     printf("%s", ft_memmove(str1, str2, 5));
// }
