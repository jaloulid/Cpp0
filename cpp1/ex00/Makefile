NAME = zombie
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp newzombie.cpp randomchump.cpp Zombie.cpp

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
