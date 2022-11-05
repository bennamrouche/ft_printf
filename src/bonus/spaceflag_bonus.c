/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spaceflag_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:07:39 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 14:55:43 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/ft_printf_bonus.h"

void	spaceflag_bonus(va_list *list, char *format, int *index, int *len)
{
	int	num;
	int	fake;

	fake = 0;
	while (format[*index] == ' ')
		*index += 1;
	if (format[*index] == 'i' || format[*index] == 'd')
	{
		num = va_arg(*list, int);
			*index += 1;
		if (num >= 0)
			ft_putchar(' ', &fake, len);
		ft_putnbr(num, index, len);
	}
	else
		checkafter_bonus(list, format, index, len);
}
