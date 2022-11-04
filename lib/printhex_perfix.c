/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex_perfix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:29:53 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 17:17:14 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	printhex_perfix(unsigned long num, int *index, int *len, char flag)
{
	int	fake;

	fake = 0;
	if (flag == 'X')
		ft_putstr("0X", &fake, len);
	else
		ft_putstr("0x", &fake, len);
	ft_printhex(num, index, len, flag);
}
