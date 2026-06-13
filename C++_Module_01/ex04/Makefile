# 1. Program name
NAME = replace

# 2. Compiler and Compilation Flags
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

# 3. Source and Object files
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

# 4. Default Target Rule
all: $(NAME)

# 5. Linking Rule (compiles the final binary executable)
$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# 6. Compilation Rule (Compiles individual .cpp files into .o obkect files)
%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

# 7. Clean Rules
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		
# 8. Rebuild Rule
re: fclean all

# 9. Phony Targets (Prevents conflicts with files named clean/fclean/re)
.PHONY: all clean fclean re
