/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:01:17 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/18 18:41:08 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	ft_putptr(const void *ptr)
{
	unsigned long long address = (unsigned long long)ptr;
	int num_chars = 0;

	if (address == 0)
		num_chars = 1;
	else
	{
		while (address != 0)
		{
			address /= 16;
			num_chars++;
		}
	}
	write(1, "0x", 2);
	write(1, (char *)&ptr, sizeof(void *));
	return num_chars + 2;
}
