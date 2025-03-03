# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 19:37:09 by amirfatt          #+#    #+#              #
#    Updated: 2024/10/03 12:32:25 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJECT = $(SOURCE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECT)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re