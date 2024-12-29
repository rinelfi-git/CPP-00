NAME = global_banksters
CPPC = c++
CPPARG = -Wall -Wextra -Werror
SRCs = tests.cpp \
		Account.cpp
OBJs = $(SRCs:.cpp=.o)

$(NAME): $(OBJs)
	$(CPPC) $(CPPARG) $(OBJs) -o $@

%.o: %.cpp
	$(CPPC) $(CPPARG) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJs)

fclean: clean
	rm -rf $(NAME)

re: fclean all
