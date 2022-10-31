# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:19:07 by ebennamr          #+#    #+#              #
#    Updated: 2022/10/31 19:42:58 by ebennamr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a


CC := cc
FLAGS := -Wall -Wextra -Werror
SRC := ft_printf.c\
		checkformat.c\
		simpleformat.c\
		lib/ft_putchar.c\
		lib/ft_strchr.c\
		lib/ft_putstr.c\
		lib/ft_strlen.c

INCLUDE := ft_print.h lib/helper.h

OBJ:= $(SRC:.c=.o)


all :$(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

%.o:%.c $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean:clean
	rm $(NAME)

re:fclean all
run :$(NAME)
	cc main.c $(NAME) -o $@
	./$@
	rm -rf $@


.PHONY:clean fclean re all



