/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:36 by nkerioz           #+#    #+#             */
/*   Updated: 2022/03/01 01:28:27 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long nb)
{
	int	size;

	size = 0;
	if (nb <= 0)
		size = 1;
	while (nb)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	size_t	i;

	nb = n;
	i = ft_size(nb);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	*(str + i--) = '\0';
	if (nb == 0)
		*str = '0';
	if (nb < 0)
	{
		*str = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		*(str + i--) = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}

// int main()
// {
//     int a = -2578;
//     char *b = ft_itoa(a);
//     printf("%s", b);
// }
