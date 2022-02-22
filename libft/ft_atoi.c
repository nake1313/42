/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:34:40 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:34:40 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	const char *p;
	int	s;
	int	res;

	p = nptr;
	s = 1;
	res = 0;
	while (*p == ' ' || *p == '\n' || *p == '\t'
		|| *p == '\v' || *p == '\f' || *p == '\r')
		p++;
	if (*p == '-')
		s = -1;
	if (*p == '-' || *p == '+')
		p++;
	while (*p >= '0' && *p <= '9')
	{
		res = (res * 10) + (*p - 48);
		p++;
	}
	return (res * s);
}
/*
#include <stdio.h>

int main()
{
	char *sayi;
	sayi = "+123";
	printf("%d", ft_atoi(sayi));
}
*/
