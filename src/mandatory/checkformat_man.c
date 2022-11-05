/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkformat_man.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:32:02 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 13:04:38 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	checkformat_man(va_list *list, char *format, int *index, int *len)
{
	if (!format[*index])
		return ;
	if (ft_strchr("cspdiuxX", format[*index]) != NULL)
		simpleformat(list, format, index, len);
	else
		ft_putchar(format[*index], index, len);
}
