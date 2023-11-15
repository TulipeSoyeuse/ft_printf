# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 11:11:43 by rdupeux           #+#    #+#              #
#    Updated: 2023/11/15 15:39:44 by rdupeux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Source, Executable, Includes, Library Defines
HEADER		=	ft_printf.h
SRC			=	$(wildcard ft_*.c)
OBJ			=	$(SRC:.c=.o)

# Compiler, Linker Defines
CC		= cc
CFLAGS 	= -Wall -Wextra -Werror
NAME	= libftprintf.a

# Link all Object Files with external Libraries into Binaries
all: $(NAME)

re: fclean all

libft.a:
	make -C libft/ all

$(NAME): $(OBJ) libft.a
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJ)

# Clean Up Objects, Exectuables, Dumps out of source directory
clean:
	rm -f $(OBJ)

fclean: clean
	make -C libft fclean
	rm -f $(NAME) a.out core $(name)

.PHONY: all clean fclean re
