/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simpleformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:54:24 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/31 19:45:34 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	simpleformat(va_list *list, char *format, int *index, int *len)
{
	if (format[*index] == '%' )
		ft_putchar('%', len, index);
	else if (format[*index] == 'c')
		ft_putchar(va_arg(*list, char), len, index);
	else if (format[*index] == 's')
		printf("STRING");

}
