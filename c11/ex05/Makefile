# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 17:04:36 by schoe             #+#    #+#              #
#    Updated: 2022/02/23 09:51:41 by schoe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs

SRCS = ${SRC_DIR}/ft_atoi.c ${SRC_DIR}/ft_putstr.c ${SRC_DIR}/do_op.c ${SRC_DIR}/ft_putnbr.c ${SRC_DIR}/main.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

INCLUDE = includes

NAME = do-op

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

${NAME} : ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : $(NAME)

clean :
		${RM} $(OBJS)

fclean : clean
		${RM} $(NAME)

re : fclean all

.PHONY: all clean fclean re
