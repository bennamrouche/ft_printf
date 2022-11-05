/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashflag_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:08:00 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 14:55:35 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/ft_printf_bonus.h"

void	hashflag_bonus(va_list *list, char *format, int *index, int *len)
{
	while (format[*index] == '#')
		*index += 1;
	if (format[*index] == 'x' || format[*index] == 'X')
	{
		*index += 1;
		printhex_perfix(va_arg(*list, unsigned int),
			index, len, format[*index - 1]);
	}
	else
		checkafter_bonus(list, format, index, len);
}
