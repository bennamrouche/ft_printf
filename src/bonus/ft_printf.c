/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:24 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 15:31:59 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/ft_printf_bonus.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		index;
	int		len;

	len = 0;
	index = 0;
	if (!format)
		return (-1);
	va_start(list, format);
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			checkformat_bonus(&list, (char *)format, &index, &len);
		}
		else
			ft_putchar(format[index], &index, &len);
	}
	return (len);
}
