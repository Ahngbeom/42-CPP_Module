# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 20:50:55 by bahn              #+#    #+#              #
#    Updated: 2022/01/26 21:24:39 by bahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS_DIR = ./
SRCS_FILE = megaphone.cpp
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