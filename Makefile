# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 11:36:52 by cprojean          #+#    #+#              #
#    Updated: 2022/12/01 16:45:44 by cprojean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

ARFLAGS = rcs

rm = rm -rf

HEADERS = libftprintf.h

SRCS =						ft_printf.c				\
							ft_convert_hexa_maj.c	\
							ft_convert_hexa_min.c	\
							ft_putnbr.c				\
							ft_putstr.c				\
							which_varia.c			\
							ft_putchar.c			\

OBJS = $(SRCS:.c=.o)

$(NAME) :	$(OBJS) $(LIBFT) Makefile
			$(MAKE) bonus -C libft
			ar $(ARFLAGS) $(NAME) $(OBJS)


all	:		$(NAME)



clean :
			${MAKE} clean -C libft
			$(RM) $(OBJS)

fclean :	clean
			${MAKE} fclean -C libft
			$(RM) $(NAME)

re :		fclean all
