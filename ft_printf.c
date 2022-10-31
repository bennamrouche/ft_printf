/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:24 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/31 19:46:53 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			checkformat(&list,(char *)format,&index,&len);
		else
			ft_putchar(format[index], &len, &index);
	index++;
	}
 return (len);
}
