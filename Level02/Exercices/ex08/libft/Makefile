
SRC_DIR		=		./srcs/

HEAD_DIR	=		./includes/

SRCS		= 	   ${SRC_DIR}ft_putchar.c\
					${SRC_DIR}ft_putnbr.c\
					${SRC_DIR}ft_putstr.c\
					${SRC_DIR}ft_strchr.c\
					${SRC_DIR}ft_strdup.c\
					${SRC_DIR}ft_strcat.c\
					${SRC_DIR}ft_strcpy.c\
					${SRC_DIR}ft_strlen.c\
					${SRC_DIR}ft_tolower.c\
					${SRC_DIR}ft_toupper.c\
					${SRC_DIR}ft_strjoin.c\


HEAD		=		${HEAD_DIR}libft.h

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc

RM			= rm -f

CFLAGS		= #-Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I${HEAD_DIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc libft.a ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all	clean	fclean re