/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:16:23 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 15:12:00 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../lib/helper.h"
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	checkformat_man(va_list *list, char *format, int *index, int *len);
void	simpleformat(va_list *list, char *format, int *index, int *len);
#endif
