# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:19:07 by ebennamr          #+#    #+#              #
#    Updated: 2022/11/05 15:40:18 by ebennamr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a


CC := cc
FLAGS := -Wall -Wextra -Werror
SRC_LIB :=lib/simpleformat.c\
		lib/ft_putchar.c\
		lib/ft_strchr.c\
		lib/ft_putstr.c\
		lib/ft_strlen.c\
		lib/ft_putnbr.c\
		lib/ft_printhex.c\
		lib/printhex_perfix.c\
		lib/ft_putuns_nbr.c\
		lib/incr_pointer.c
SRC_MAN := mandatory/ft_printf.c\
		mandatory/checkformat_man.c


SRC_BNS:=bonus/ft_printf.c\
		bonus/checkformat_bonus.c\
		bonus/checkafter_bonus.c\
		bonus/hashflag_bonus.c\
		bonus/spaceflag_bonus.c\
		bonus/plusflag_bonus.c



INCLUDE_BNS :=bonus/ft_printf_bonus.h
INCLUDE_MAN:=mandatory/ft_printf.h
INCLUDE_LIB :=lib/helper.h

OBJ_MAN:= $(SRC_MAN:.c=.o)
OBJ_BNS:= $(SRC_BNS:.c=.o)
OBJ_LIB:= $(SRC_LIB:.c=.o)


all :$(NAME)
bonus : $(OBJ_BNS) $(OBJ_LIB)
	ar -rcs $(NAME) $^
$(NAME): $(OBJ_MAN) $(OBJ_LIB)
	ar -rcs $@ $^

mandatory/%.o:mandatory/%.c $(INCLUDE_MAN)
	$(CC) $(FLAGS) -c $< -o $@
bonus/%.o:bonus/%.c $(INCLUDE_BNS)
	$(CC) $(FLAGS) -c $< -o $@
lib/%.o:lib/%.c $(INCLUDE_LIB)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ_MAN) $(OBJ_LIB) $(OBJ_BNS)
fclean:clean
	rm $(NAME)

re:fclean all


.PHONY:clean fclean re all bonus



