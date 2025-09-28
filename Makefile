CXX = c++ 
RM = rm  

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RMFLAGS = -rf


SRCS = ClapTrap.cpp ScavTrap.cpp
DEPS =  ClapTrap.hpp ScavTrap.hpp
NAME = run

all : $(NAME)

$(NAME) : $(SRCS) $(DEPS) 
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ 


fclean : 
	$(RM) $(RMFLAGS) $(NAME) 

re : fclean all 

.PHONY : re fclean all 
