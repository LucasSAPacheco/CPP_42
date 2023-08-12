#include "Bureaucrat.hpp"

// ==== Constructors and Destructors =========================================//
Bureaucrat::Bureaucrat() : _name("Jefferson Caminhões"), _grade(24){
    std::cout << GREEN << "Default Bureaucrat Constructor Called!" << RES 
    << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){
    if (this->_grade < MAX_GRADE) {throw GradeTooHighException();}
    else if (this->_grade > MIN_GRADE) {throw GradeTooLowException();}
    std::cout << GREEN << "Name and Grade Constructor Called!" << RES
    << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
    std::cout << GREEN << "Copy Constructor Called!"<< RES << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat(){
    std::cout << GREEN << "Destructor Called!" << RES << std::endl;
}

// ==== Overloads ============================================================//
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){
    if (this != &copy){
        this->_grade = copy.getGrade();
        const_cast<std::string&>(this->_name) = copy.getName();
        std::cout << GREEN << "Copy Assign Called Operator Called!" << RES
        << std::endl;
    }
    return (*this);
}

std::ostream    &operator<<(std::ostream &output, const Bureaucrat &o){
    output << GREEN << o.getName() << ", bureaucrat grade " << o.getGrade()
    << ".";
    return (output);
}

// ==== Member Functions =====================================================//
std::string Bureaucrat::getName( void ) const {return (this->_name);}
int         Bureaucrat::getGrade( void) const {return (this->_grade);}

void        Bureaucrat::incrementGrade( int amount ){
    if (this->getGrade() - amount < MAX_GRADE){throw GradeTooHighException();}
    this->_grade -= amount;
}

void        Bureaucrat::decrementGrade( int amount ){
    if (this->getGrade() + amount > MIN_GRADE){throw GradeTooLowException();}
    this->_grade += amount;
}

void        Bureaucrat::signForm(Form &form){
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    } catch (std::exception &e){
        std::cout << this->getName() << " couldn't assign " << form.getName()
        << " because " << e.what() << std::endl; 
    }
}

// ==== Exception ============================================================//
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

