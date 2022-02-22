/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:16 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:16 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char *p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
/*
#include <stdio.h>

int main()
{
	char *str = "Nazmi";
	printf("%ld",ft_strlen(str));
}
*/
