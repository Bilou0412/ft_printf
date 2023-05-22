/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:10:01 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/18 21:43:04 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_printf.h"

static int	len_nbr(unsigned int n)
{
	int	i;

	i = 0;
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_put_unsigned(unsigned int n)
{
	unsigned int		nb;
	char				nbr;

	nb = n;
	nbr = nb + '0';
	if (nb > 9)
	{
		ft_put_unsigned(nb / 10);
		ft_put_unsigned(nb % 10);
	}
	if (nb <= 9)
	{
		write(1, &nbr, 1);
	}
	return (len_nbr(n));
}
