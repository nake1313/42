/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:28 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:28 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n--)
	{
		if (*str1++ != *str2++)
			return (*(str1 - 1) - *(str2 - 1));
	}
	return (0);
}

// int main()
// {
// 	char *s1, *s2;
// 	s1 = "ahmet";
// 	s2 = "can";
// 	printf("%d", ft_strncmp(s1, s2, 3));
// }
