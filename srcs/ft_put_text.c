/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:58:36 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/18 17:21:50 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

char	*ft_put_text(const char *str, int *len)
{
	char	*strverif;

	strverif = ft_strchr(str, '%');
	if (!strverif)
	{
		*len += write(1, str, ft_strlen(str));
		return ((char *)str + ft_strlen(str));
	}
	else
	{
		*len += write(1, str, (int)(ft_strchr(str, '%') - str));
		return (ft_strchr(str, '%'));
	}
}
