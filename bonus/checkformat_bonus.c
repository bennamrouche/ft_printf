/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkformat_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:32:02 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 18:19:30 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	checkformat_bonus(va_list *list, char *format, int *index, int *len)
{
	if (!format[*index])
		return ;
	if (ft_strchr("cspdiuxX", format[*index]) != NULL)
	{
		simpleformat(list, format, index, len);
	}
	else
		ft_putchar(format[*index], len, index);
}
