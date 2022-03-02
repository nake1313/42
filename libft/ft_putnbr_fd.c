/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:24 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:39:24 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[10];
	int		i;
	long	nbr;

	i = 9;
	nbr = n;
	if (nbr == 0)
		write(fd, "0", 1);
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr)
	{
		*(s + i--) = nbr % 10 + 48;
		nbr /= 10;
	}
	i++;
	write(fd, s + i, 10 - i);
}

// int main()
// {
// 	int n = 5;
// 	ft_putnbr_fd(n, 1);
// }
