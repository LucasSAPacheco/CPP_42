NAME	= identify

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJDIR	= ./objs/

SRCDIR	= ./srcs/

INCLUDE	= ./include/

SRC		= main.cpp Base.cpp

OBJ		= $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

$(NAME): $(OBJDIR) $(OBJ) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re leaks run
