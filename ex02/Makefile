# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 15:16:29 by mmutsulk          #+#    #+#              #
#    Updated: 2025/11/21 16:08:29 by mmutsulk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = tests.cpp \
	  Account.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re