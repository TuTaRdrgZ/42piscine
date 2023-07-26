
NAME = rush-02

SRCS = source/main.c source/functions.c source/define.c

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iinclude ${FLAGS}

fclean: clean

clean: 
	rm -f ${NAME}

.PHONY: all clean fclean
