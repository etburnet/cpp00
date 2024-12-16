# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 11:45:03 by eburnet           #+#    #+#              #
#    Updated: 2024/12/14 12:16:40 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone_book
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = contact.class.cpp phone_book.class.cpp main.cpp
HEADER = contact.class.hpp phone_book.class.hpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re