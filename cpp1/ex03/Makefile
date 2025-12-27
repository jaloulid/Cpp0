NAME = weapon

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Weapon.cpp HumanA.cpp main.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@


all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)	

clean :	
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re :fclean all