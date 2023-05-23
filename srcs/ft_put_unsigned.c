/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:10:01 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/23 14:32:12 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_printf.h"

int	ft_put_unsigned(unsigned int nb, int *len)
{
	if (nb > 9)
	{
		ft_put_unsigned(nb / 10, len);
		ft_put_unsigned(nb % 10, len);
	}
	if (nb <= 9)
	{
		*len += ft_putchar(nb + '0');
	}
	return (0);
}
