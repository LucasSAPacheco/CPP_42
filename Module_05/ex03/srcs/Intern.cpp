#include "../includes/Intern.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

// ==== Constructors =========================================================//
Intern::Intern(){
    std::cout << ORANGE << "Default Constructor Called!" << RES << std::endl;
}

Intern::Intern(const Intern &copy){
    *this = copy;
    std::cout << ORANGE << "Copy Constructor Called!" << std::endl;
}

Intern::~Intern(){
    std::cout << ORANGE << "Destructor Called!" << std::endl;
}

// ==== Overloads ============================================================//
Intern &Intern::operator=(const Intern &copy){
    if (this != &copy){
        *this = copy;
    }
    return *this;
}

// ==== Member Funtions ======================================================//
static AForm *makeShrubberyCreationForm(std::string target){
    return new ShrubberyCreationForm(target);
}

static AForm *makeRobotomyRequestForm(std::string target){
    return new RobotomyRequestForm(target);
}

static AForm *makePresidentialPardonForm(std::string target){
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target){
    AForm *(*f[3])(std::string) = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++){
        if (name == forms[i]){
            std::cout << GREEN << "Intern creates " << name << RES << std::endl;
            return (f[i](target));
        }
    }
    std::cout << RED << "Error creating form" << RES << std::endl;
    return NULL;
}
