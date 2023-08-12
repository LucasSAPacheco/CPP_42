#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Form.hpp"

# define MAGENTA "\033[35m"
# define RED "\x1b[38;5;88m"
# define GREEN "\x1b[38;5;40m"
# define BLUE "\x1b[38;5;25m"
# define ORANGE	"\033[0;38;5;166m"
# define LIGHT_PURPLE "\033[1;35m"
# define PINK	"\033[1;38;5;218m"
# define YELLOW "\x1b[38;5;220m"
# define CYAN "\001\e[0;36m\002"
# define RES "\x1b[0m"

# define MAX_GRADE 1
# define MIN_GRADE 150

class Form;

class Bureaucrat{
    private:
        const std::string   _name;
        int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &copy);

        void        signForm(Form &form);
        void        incrementGrade( int amount );
        void        decrementGrade( int amount );
        std::string getName( void ) const;
        int         getGrade( void ) const;


        class GradeTooHighException : public std::exception{
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &output, const Bureaucrat &o);

#endif