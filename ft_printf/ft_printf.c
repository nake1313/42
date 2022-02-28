/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:02:00 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/23 20:02:00 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printptr(uintptr_t nbr, const char type)
{
	char	s[16];
	int		i;

	if (nbr == 0 && type == 'p')
		return (write(1, "0x0", 3));
	if (nbr == 0 && type != 'p')
		return (write(1, "0", 1));
	i = 15;
	while (nbr)
	{
		if (type == 'X')
		*(s + i--) = "0123456789ABCDEF"[nbr % 16];
		else
		*(s + i--) = "0123456789abcdef"[nbr % 16];
		nbr /= 16;
	}
	i++;
	if (type == 'p')
		return (write(1, "0x", 2) + write(1, s + i, 16 - i));
	else
		return (write(1, s + i, 16 - i));
}

static int	ft_printstr(char *s, int c, const char type)
{
	const char	*p;

	if (type == 'c')
		return (write(1, &c, 1));
	if (s == NULL)
		return (write(1, "(null)", 6));
	p = s;
	while (*p)
		p++;
	return (write(1, s, p - s));
}

static int	ft_printnbr(long long nbr)
{
	char	s[10];
	int		i;
	int		len;

	i = 9;
	len = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	if (nbr < 0)
	{
		nbr *= -1;
		len += write(1, "-", 1);
	}
	while (nbr)
	{
		*(s + i--) = nbr % 10 + 48;
		nbr /= 10;
	}
	i++;
	return (len + write(1, s + i, 10 - i));
}

static int	ft_types(va_list args, const char *type)
{
	int	i;

	i = 0;
	if (*type == 'c')
		i += ft_printstr("", va_arg(args, int), *type);
	else if (*type == 's')
		i += ft_printstr(va_arg(args, char *), 0, *type);
	else if (*type == 'p')
		i += ft_printptr(va_arg(args, uintptr_t), *type);
	else if (*type == 'x' || *type == 'X')
		i += ft_printptr(va_arg(args, unsigned int), *type);
	else if (*type == 'd' || *type == 'i')
		i += ft_printnbr(va_arg(args, int));
	else if (*type == 'u')
		i += ft_printnbr(va_arg(args, unsigned int));
	else
		i += write(1, type, 1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			len += ft_types(args, (str + 1));
			str++;
		}
		else if (!(*str == '%' && *(str + 1) == '\0'))
			len += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (len);
}
