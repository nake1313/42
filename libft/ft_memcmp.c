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

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t				i;
	unsigned const char	*tmp_ptr1;
	unsigned const char	*tmp_ptr2;

	tmp_ptr1 = (unsigned const char *)ptr1;
	tmp_ptr2 = (unsigned const char *)ptr2;
	i = 0;
	while (i < n)
	{
		if (tmp_ptr1[i] != tmp_ptr2[i])
			return (tmp_ptr1[i] - tmp_ptr2[i]);
		i++;
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
