TESTFILE 	= tests/tests_libft.c
TESTPROGRAM = libft.tests
SRCDIR		= ../
NAME		= libft.a
OBJS		= ${SRCS:.c=.o}

test:		fclean
			make re -C ../
			@cc -o ${TESTPROGRAM} -I . -I ${SRCDIR} ${TESTFILE} -L${SRCDIR} -lft
			@./${TESTPROGRAM}

leakfull:	test
			valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${TESTPROGRAM}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME} ${TESTPROGRAM}
