/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simpleformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:54:24 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 13:54:36 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/ft_printf.h"

void	simpleformat(va_list *list, char *format, int *index, int *len)
{
	if (format[*index] == 'c')
		ft_putchar(va_arg(*list, int), index, len);
	else if (format[*index] == 's')
		ft_putstr(va_arg(*list, char *), index, len);
	else if (format[*index] == 'i' || format[*index] == 'd')
		ft_putnbr((int)va_arg(*list, int), incr_pointer(index), len);
	else if (format[*index] == 'x' || format[*index] == 'X')
		ft_printhex(va_arg(*list, unsigned int), incr_pointer(index),
			len, format[*index - 1]);
	else if (format[*index] == 'p')
		printhex_perfix((unsigned long)va_arg(*list, void *),
			incr_pointer(index), len, format[*index - 1]);
	else if (format[*index] == 'u')
		ft_putuns_nbr(va_arg(*list, unsigned int), incr_pointer(index), len);
}
