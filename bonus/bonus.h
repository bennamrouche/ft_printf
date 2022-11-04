/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:20:37 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/04 16:24:11 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H
# include "../ft_printf.h"

void	hashflag(va_list *list, char *format, int *index, int *len);
void	checkformat_bonus(va_list *list, char *format, int *index, int *len);
void	spaceflag(va_list *list, char *format, int *index, int *len);
void	plusflag(va_list *list, char *format, int *index, int *len);
#endif
