/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:16:23 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 15:00:44 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include <stdarg.h>
# include "../lib/helper.h"
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	checkformat(va_list *list, char *format, int *index, int *len);
void	hashflag_bonus(va_list *list, char *format, int *index, int *len);
void	checkformat_bonus(va_list *list, char *format, int *index, int *len);
void	checkafter_bonus(va_list *list, char *format, int *index, int *len);
void	spaceflag_bonus(va_list *list, char *format, int *index, int *len);
void	plusflag_bonus(va_list *list, char *format, int *index, int *len);
#endif
