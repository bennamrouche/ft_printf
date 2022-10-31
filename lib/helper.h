/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:00:35 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/31 19:38:42 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H
# include <unistd.h>

void	ft_putchar(char c, int *len, int *index);
char	*ft_strchr( char *s, int x);
size_t	ft_strlen( char *str);
void	ft_putstr(char *s, int *len, int *index);
#endif
