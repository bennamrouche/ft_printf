/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:40:29 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 13:57:59 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	ft_putuns_nbr(unsigned int num, int *index, int *len)
{
	int	fake;

	fake = *index;
	if (num > 9)
	{
		ft_putuns_nbr(num / 10, &fake, len);
		ft_putchar(num % 10 + '0', &fake, len);
	}
	else
		ft_putchar(num + '0', &fake, len);
}
