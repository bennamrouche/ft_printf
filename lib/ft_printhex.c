/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:02:24 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 18:52:05 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	ft_printhex(unsigned long num, int *index, int *len, char flag)
{
	int		fake;
	char	*hex;

	fake = 0;
	if (flag == 'x' || flag == 'p')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num > 15)
	{
		ft_printhex(num / 16, &fake, len, flag);
		ft_putchar(hex[num % 16], &fake, len);
	}
	else
		ft_putchar(hex[num % 16], &fake, len);
}
