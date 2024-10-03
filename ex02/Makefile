NAME = hi_this_is_brain
CXX = c++
CXXFLAGS := -Wall -Wextra -Werror

SOURCES := main.cpp
OBJECTS := $(SOURCES:.cpp=.o)

target asan: CXXFLAGS += -fsanitize=address,undefined -g

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
asan: re

.PHONY: all re clean fclean asan
