#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

# include <iostream>
# include <string>

class Bureaucrat;

class AForm{
    private:

        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExec;


    public:

        AForm();
        AForm(std::string name, int sign, int exec);
        AForm(const AForm &copy);
        virtual ~AForm();

        AForm &operator=(const AForm &copy);

        void            beSigned(Bureaucrat &bur);
        std::string     getName( void ) const;
        bool            getSigned ( void ) const;
        int             getGradeSign ( void ) const;
        int             getGradeExec ( void ) const;
        virtual void    execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighException : public std::exception{
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };

        class FormAlreadyAssignedException : public std::exception {
            virtual const char* what() const throw();
        };

        class FormNotSignedException : public std::exception {
            virtual const char* what() const throw();
        };

};

std::ostream &operator<<(std::ostream &output, AForm const &o);

#endif