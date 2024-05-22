# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 14:28:24 by okoca             #+#    #+#              #
#    Updated: 2024/05/22 22:19:16 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRC_DIR = ./src/

INCLUDES_DIR = ./includes/

LIBFT = libft

CFLAGS = -Wall -Werror -Wextra -I${INCLUDES_DIR} -I${LIBFT}

LDFLAGS = -L${LIBFT} -lft

SRC_FILES = ft_printf.c \
	parse.c \
	utils.c \
	handle_flag.c \
	main_flags.c \

NAME = libftprintf.a

SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}

OBJS = ${SRC:.c=.o}

EXEC = a.out

%.o: %.c
	${CC} ${CFLAGS} ${LDFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	make -C ${LIBFT}
	cp ${LIBFT}/libft.a libft.a
	mv libft.a ${NAME}
	ar rcs ${NAME} ${OBJS}

${EXEC}: ${NAME}
	make -C ${LIBFT}
	${CC} ${CFLAGS} src/main.c  -L. -lftprintf -o ${EXEC}

all: ${NAME}

test: ${EXEC}

clean:
	rm -f ${OBJS}
	rm -f *.o
	rm -f put*.txt
	rm -f ${SRC_DIR}*.out
	rm -f libft.a
	rm -f ${EXEC}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re test

