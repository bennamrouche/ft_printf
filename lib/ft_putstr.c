/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:58:09 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 14:52:12 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	ft_putstr(char *s, int *index, int *len)
{
	int	l;

	*index = *index + 1;
	if (!s)
	{
		*len += write(1, "(null)", 6);
	}
	else
	{
			l = ft_strlen(s);
	*len += write(1, s, l);
	}
}
