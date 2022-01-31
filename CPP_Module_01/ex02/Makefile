# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 01:04:28 by bahn              #+#    #+#              #
#    Updated: 2022/01/31 01:05:15 by bahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN

CC = clang++
CFLAGS = -Wall -Wextra -Werror
INCFLAGS = -I.

RM = rm -rf

SRCS_DIR = ./
SRCS_FILE = main.cpp
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