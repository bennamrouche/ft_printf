/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashflag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:08:00 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 18:31:17 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	hashflag(va_list *list, char *format, int *index, int *len)
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
		checkformat_bonus(list, format, index, len);
}
