/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:22:14 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/22 18:46:43 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>

char			*ft_put_text(const char *str, int *len);
char			*ft_strchr(const char *str, int c);
int				ft_putnbr(int n);
int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_strlen(const char *str);
int				ft_put_unsigned(unsigned int n);
int				*ft_putptr(unsigned long nb, int *len);
int				*ft_puthexa(unsigned int nb, char c, int *len);

#endif
