# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 20:50:55 by bahn              #+#    #+#              #
#    Updated: 2022/01/27 01:02:25 by bahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = clang++
CFLAGS = -Wall -Wextra -Werror
INCFLAGS = -I./includes

RM = rm -rf

SRCS_DIR = ./
SRCS_FILE = main.cpp \
			phone_book.cpp \
			contacts.cpp \
			welcome.cpp
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