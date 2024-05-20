# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 14:28:24 by okoca             #+#    #+#              #
#    Updated: 2024/05/20 16:16:11 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRC_DIR = ./src/

INCLUDES_DIR = ./includes/

CFLAGS = -Wall -Werror -Wextra -I ${INCLUDES_DIR}

SRC_FILES = main.c

NAME = libftprintf.a

SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}

OBJS = ${SRC:.c=.o}

EXEC = ft_printf.out

LIBFT = libft

%.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	make -C ${LIBFT}
	cp ${LIBFT}/libft.a ./${NAME}
	ar rcs ${NAME} ${OBJS}

${EXEC}: ${OBJS}
	make -C ${LIBFT}
	cp ${LIBFT}/libft.a ./libft.a
	${CC} ${CLFLAGS} ${OBJS} -L${LIBFT} -lft -o ${EXEC}

all: ${NAME}

test: ${EXEC}

clean:
	rm -f ${OBJS}
	rm -f *.o
	rm -f put*.txt
	rm -f ${SRC_DIR}*.out
	rm -f libft.a

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re test

