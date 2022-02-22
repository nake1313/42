/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:03 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:39:03 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*p++ = c;
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "42ecole";
	char a = 'x';
	printf("%s", (char *)ft_memset(str, a, 3));
}
*/
