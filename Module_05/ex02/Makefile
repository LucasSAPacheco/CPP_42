NAME	=	bureaucrat

SRCS	=	$(MAIN)
MAIN	=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ_DIR	=	obj
OBJS	=	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)


CC 		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

VPATH	=	./includes ./srcs

HEADER	=	Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

INCLUDE	=	-I ./ -I ./includes

all:		$(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

$(OBJ_DIR):
	mkdir -p $@

clean:
			rm -rf obj

fclean:		clean
			rm -f $(NAME)
			rm -rf *_shrubbery

re:			fclean all

.PHONY: all clean fclean re 