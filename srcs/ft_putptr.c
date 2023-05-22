/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:01:17 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/22 16:50:17 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_printf.h"

int	*ft_putptr(unsigned long nb, int *len)
{
	char		*base_lowcaps;

	base_lowcaps = "0123456789abcdef";
	if (nb > 15)
	{
		ft_putptr(nb / 16, len);
		ft_putptr(nb % 16, len);
	}
	if (nb < 16)
		*len += write(1, &base_lowcaps[nb], 1);
	return (len);
}
