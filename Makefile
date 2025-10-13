CXX = c++ 
RM = rm  

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -I./
RMFLAGS = -rf


SRCS = ClapTrap.cpp FragTrap.cpp main.cpp
DEPS =  ClapTrap.hpp FragTrap.hpp
NAME = run

all : $(NAME)

$(NAME) : $(SRCS) $(DEPS) 
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ 


fclean : 
	$(RM) $(RMFLAGS) $(NAME) 

re : fclean all 

.PHONY : re fclean all 
