/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkformat_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:32:02 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 14:54:12 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/ft_printf_bonus.h"

void	checkformat_bonus(va_list *list, char *format, int *index, int *len)
{
	if (!format[*index])
		return ;
	if (ft_strchr("cspdiuxX", format[*index]) != NULL)
		simpleformat(list, format, index, len);
	else if (format[*index] == '#')
		hashflag_bonus(list, format, index, len);
	else if (format[*index] == ' ')
		spaceflag_bonus(list, format, index, len);
	else if (format[*index] == '+')
		plusflag_bonus(list, format, index, len);
	else
		ft_putchar(format[*index], index, len);
}
