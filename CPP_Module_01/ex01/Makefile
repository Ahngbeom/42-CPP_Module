# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 00:10:28 by bahn              #+#    #+#              #
#    Updated: 2022/01/31 00:10:31 by bahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = clang++
CFLAGS = -Wall -Wextra -Werror
INCFLAGS = -I.

RM = rm -rf

SRCS_DIR = ./
SRCS_FILE = main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp
SRCS = $(addprefix $(SRCS_DIR), $(SRCS_FILE))
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)
	@ echo 1> /dev/null
.cpp.o :
	@ $(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	@ $(CC) $(CFLAGS) $(INCFLAGS) $^ -o $@

clean : 
	-@ $(RM) $(OBJS)

fclean : clean
	-@ $(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re