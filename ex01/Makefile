SRCS = PhoneBook.cpp Contact.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = diary

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

%.o: %.cpp
			@${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean: 
		${RM} ${OBJS}

fclean: clean 
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
