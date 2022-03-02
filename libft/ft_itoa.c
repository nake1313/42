/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:36 by nkerioz           #+#    #+#             */
/*   Updated: 2022/03/02 22:04:29 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		nb;

	nb = n;
	i = 1 + (n <= 0);
	while (n && i++)
		n /= 10;
	str = (char *)malloc(sizeof(char) * (i--));
	if (!str)
		return (NULL);
	*(str + i--) = '\0';
	if (nb == 0)
		*str = '0';
	if (nb < 0)
		*str = '-';
	while (nb)
	{
		if (nb > 0)
		*(str + i--) = 48 + nb % 10;
		else
		*(str + i--) = 48 - nb % 10;
		nb /= 10;
	}
	return (str);
}
/*
int	main()
{
	int a = 2578;
	char *b = ft_itoa(a);
}
*/
