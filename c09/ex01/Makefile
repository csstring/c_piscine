# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 17:04:36 by schoe             #+#    #+#              #
#    Updated: 2022/02/21 12:53:07 by schoe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs

SRCS = ${SRC_DIR}/ft_putchar.c ${SRC_DIR}/ft_swap.c ${SRC_DIR}/ft_putstr.c ${SRC_DIR}/ft_strlen.c ${SRC_DIR}/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

INCLUDE = includes

NAME = libft.a

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

${NAME} : ${OBJS}
		ar -crs ${NAME} ${OBJS}

all : $(NAME)

clean :
		${RM} $(OBJS)

fclean : clean
		${RM} $(NAME)

re : fclean all

.PHONY: all clean fclean re
