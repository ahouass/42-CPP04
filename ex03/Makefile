NAME = materia

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = AMateria.hpp MateriaSource.hpp Character.hpp Ice.hpp Cure.hpp

SRC = AMateria.cpp MateriaSource.cpp Character.cpp Ice.cpp Cure.cpp main.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
