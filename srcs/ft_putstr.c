/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:48:14 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/23 13:55:04 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_printf.h"

int	ft_putstr(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6), 6);
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}
