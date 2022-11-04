/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simpleformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:54:24 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 17:08:19 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	simpleformat(va_list *list, char *format, int *index, int *len)
{
	if (format[*index] == 'c')
		ft_putchar(va_arg(*list, int), index, len);
	else if (format[*index] == 's')
		ft_putstr(va_arg(*list, char *), index, len);
	else if (format[*index] == 'i' || format[*index] == 'd')
	{
		*index += 1;
		ft_putnbr((int)va_arg(*list, int), index, len);
	}
	else if (format[*index] == 'x' || format[*index] == 'X')
	{
		*index += 1;
		ft_printhex(va_arg(*list, unsigned int),
			index, len, format[*index - 1]);
	}
	else if (format[*index] == 'p')
	{
		*index += 1;
		printhex_perfix(va_arg(*list, void *), index, len, format[*index - 1]);
	}
	else if (format[*index] == 'u')
	{
		*index += 1;
		ft_putuns_nbr(va_arg(*list, unsigned int), index, len);
	}
}
