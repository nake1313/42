/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:36 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:36:37 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len = 1;
	else if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*string;
	size_t	i;

	nb = n;
	i = length(nb);
	string = (char *)malloc(sizeof(char) * (i + 1));
	if (!string)
		return (NULL);
	string[i--] = '\0';
	if (nb == 0)
		string[0] = '0';
	if (nb < 0)
	{
		string[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		string[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (string);
}

// int main()
// {
//     int a = -2578;
//     char *b = ft_itoa(a);
//     printf("%s", b);
// }
