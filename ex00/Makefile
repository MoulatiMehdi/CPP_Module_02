CXX = c++ 
RM = rm 


CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
RMFLAGS = -rf

SRCS = ClapTrap.cpp main.cpp 
DEPS = ClapTrap.hpp

NAME = claptrap

all : $(NAME)

$(NAME) : $(SRCS) $(DEPS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

fclean :  
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all 




