/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkformat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:32:02 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/31 19:45:24 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	checkformat(va_list *list, char *format, int *index, int *len)
{
	if (!format [*index + 1])
	{
		ft_putchar('%', len, index);
		return ;
	}
	if (ft_strchr("cspdiuxX%", format[*index + 1]) != NULL)
	{
		*index += 1;
		simpleformat(list, format, index, len);
	}
}
