#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:

        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExec;


    public:

        Form();
        Form(std::string name, int sign, int exec);
        Form(const Form &copy);
        ~Form();

        Form &operator=(const Form &copy);

        void        beSigned(Bureaucrat &bur);
        std::string getName( void ) const;
        bool        getSigned ( void ) const;
        int         getGradeSign ( void ) const;
        int         getGradeExec ( void ) const;

        class GradeTooHighException : public std::exception{
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };

        class FormAlreadyAssignedException : public std::exception {
            virtual const char* what() const throw();
        };

};

std::ostream &operator<<(std::ostream &output, Form const &o);

#endif