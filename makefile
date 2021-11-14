SRCS	= main.c fc_*.c

OBJS	= ${SRCS:.c=.o}

NAME	= hello

CC		= cc

RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}


all:		${NAME}

clean:
			rm ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re hola