/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:58:09 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/31 19:41:45 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	ft_putstr(char *s, int *len, int *index)
{
	int	l;

	if (!s)
		return ;
	l = ft_strlen(s);
	*len += write(1, s, l);
	*index = *index + 1;
}
