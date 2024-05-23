# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 14:28:24 by okoca             #+#    #+#              #
#    Updated: 2024/05/23 10:41:26 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRC_DIR = ./src/

INCLUDES_DIR = ./includes/

LIBFT = libft

CFLAGS = -Wall -Werror -Wextra -I${INCLUDES_DIR} -I${LIBFT}

LDFLAGS = -L${LIBFT} -lft

SRC_FILES = ft_printf.c \
	handle_flag.c \
	main_flags.c \
	parse.c \
	utils.c

NAME = libftprintf.a

SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}

OBJS = ${SRC:.c=.o}

EXEC = a.out

%.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	make -C ${LIBFT}
	cp ${LIBFT}/libft.a libft.a
	mv libft.a ${NAME}
	ar rc ${NAME} ${OBJS}

${EXEC}: ${NAME}
	make -C ${LIBFT}
	${CC} ${CFLAGS} src/main.c -L. -lftprintf -o ${EXEC}

all: ${NAME}

test: ${EXEC}

clean:
	rm -f ${OBJS}
	rm -f libft.a
	rm -f ${EXEC}
	rm -f src/main.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re test
