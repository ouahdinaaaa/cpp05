# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 20:23:23 by ayael-ou          #+#    #+#              #
#    Updated: 2023/12/13 18:30:00 by ayael-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC_DIR = ./
SRCS = 	Bureaucrat.cpp\
		main.cpp\
		AForm.cpp\
		RobotomyRequestForm.cpp\
		ShruberryCreationForm.cpp\
		PresedentialPardonForm.cpp\

OBJS = ${SRCS:.cpp=.o}
CC = c++
CFLAGS += -Wall
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -g3
RM = rm -rf

ifeq ($(print), true)
	CFLAGS += -D PRINT=true
endif

%.o: %.cpp
	${CC} -c $< -o $@ ${CFLAGS}

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re