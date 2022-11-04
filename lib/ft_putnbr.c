/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:01:14 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 16:20:40 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	ft_putnbr(int num, int *index, int *len)
{
	int	fake;

	fake = 0;
	if (num == -2147483648)
	{
		ft_putstr("-2147483648", &fake, len);
		return ;
	}
	if (num < 0)
	{
		ft_putchar('-', &fake, len);
		ft_putnbr(-num, &fake, len);
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10, &fake, len);
		ft_putchar(num % 10 + '0', &fake, len);
	}
	else
		ft_putchar(num + '0', &fake, len);
}
