# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 20:23:23 by ayael-ou          #+#    #+#              #
#    Updated: 2023/12/11 15:06:49 by ayael-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

SRC_DIR = ./
SRCS = 	Bureaucrat.cpp\
		main.cpp\
		Form.cpp\
		Intern.cpp\
		RobotomyRequestForm.cpp\
		ShruberryCreationForm.cpp\
		PresedentialPardonForm.cpp\

OBJS = ${SRCS:.cpp=.o}
CC = c++
RM = rm -rf

%.o: %.cpp
	${CC} -c $< -o $@ -std=c++98 -Wall -Wextra -Werror -g3

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re