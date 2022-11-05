/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:00:35 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/05 15:10:31 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *index, int *len);
char	*ft_strchr(char *s, int x);
size_t	ft_strlen( char *str);
void	ft_putstr(char *s, int *index, int *len);
void	ft_putnbr(int num, int *index, int *len);
void	ft_putuns_nbr(unsigned int num, int *index, int *len);
void	ft_printhex(unsigned long num, int *index, int *len, char flag);
void	printhex_perfix( unsigned long num, int *index, int *len, char flag);
int		*incr_pointer(int *pt);
void	simpleformat(va_list *list, char *format, int *index, int *len);
#endif
