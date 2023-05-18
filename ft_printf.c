/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:49:29 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/18 21:44:11 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"include/ft_printf.h"
#include<stdarg.h>
#include<stdio.h>

static	int	check_str(const char *str)
{
	while (*str)
	{
		str = ft_strchr(str, '%');
		if (!str)
			return (0);
		str++;
		if (!ft_strchr("cspdiuxX%", *str))
			return (1);
	}
	return (1);
}

static const char	*ft_distrib_arg(va_list args, const char *str, int *len)
{
	if (*str == 'd' || *str == 'i')
		*len += ft_putnbr(va_arg(args, int));
	else if (*str == 'c')
		*len += ft_putchar(va_arg(args, int));
	else if (*str == 's')
		*len += ft_putstr(va_arg(args, char *));
//	else if (*str == 'p')
//	*len += ft_putptr(va_arg(args, const void *));
	else if (*str == 'u')
		*len += ft_put_unsigned(va_arg(args, unsigned int));
//	else if (*str == 'x' || *str == 'X')
//		*len += ft_puthexa(va_arg(args, unsigned int), str);
	else if (*str == '%')
		*len += write(1, "%", 1);
	return (str + 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	if (check_str(str))
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			str = ft_distrib_arg(args, str + 1, &len);
		else
			str = ft_put_text(str, &len);
	}
	return (len);
	va_end(args);
}

int	main(void)
{
	unsigned int	p;

	p = 32434232;
	printf("\n%d", ft_printf("le nombre est :%u", p));
}
