/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:49:29 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/17 18:58:14 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../libft/libft.h"
#include<stdarg.h>

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

void	distrib(const char *str, va_list args)
{
	while(*str)
	{
		if()
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	if (check_str(str))
		return (0);
	va_start(args, str);
	distrib(str, args);
	va_end(args);
}

int	main(void)
{

}
