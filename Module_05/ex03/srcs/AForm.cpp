#include "../includes/AForm.hpp"

// ==== Constructors =========================================================//
AForm::AForm() 
    : _name("Default Aform"), _isSigned(false), _gradeToSign(100), _gradeToExec(50){
    std::cout << ORANGE << "Default Constructor Called!" << RES << std::endl;
}

AForm::AForm(std::string name, int signG, int execG) 
    : _name(name), _isSigned(false), _gradeToSign(signG), _gradeToExec(execG) {
    if (signG < MAX_GRADE || execG < MAX_GRADE){throw GradeTooHighException();}
    else if (signG > MIN_GRADE || execG > MIN_GRADE){throw GradeTooLowException();}
    std::cout << ORANGE 
    << "Name, Grade to Sign and Grade to Exec Constructor Called!"
    << RES << std::endl;
}

AForm::AForm(const AForm &copy)
    : _name(copy.getName()), _isSigned(copy.getSigned()), _gradeToSign(copy.getGradeSign()), _gradeToExec(copy.getGradeExec()) {
    *this = copy;
    std::cout << ORANGE << "Copy Constructor Called!" << std::endl;
}

AForm::~AForm(){
    std::cout << ORANGE << "Destructor Called!" << std::endl;
}

// ==== Overloads ============================================================//
AForm &AForm::operator=(const AForm &copy){
    if (this != &copy){
        const_cast<std::string&>(this->_name) = copy.getName();
        const_cast<bool&>(this->_isSigned) = copy.getSigned();
        const_cast<int&>(this->_gradeToSign) = copy.getGradeSign();
        const_cast<int&>(this->_gradeToExec) = copy.getGradeExec();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &output, const AForm &o){
    output << "Form name                 = " 
    << o.getName() 
    << std::endl
    <<"Required Grade to Sign    = " 
    << o.getGradeSign() 
    << std::endl
    <<"Required Grade to Execute = " 
    << o.getGradeExec() 
    << std::endl
    << "Status                    = " 
    << (o.getSigned() ? "Signed" : "Not Signed");
	return (output);
}

// ==== Exception ============================================================//
const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

const char* AForm::FormAlreadyAssignedException::what() const throw() {
    return "The form is already signed!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "The form is not signed!";
}

// ==== Member Funstions =====================================================//
void    AForm::beSigned(Bureaucrat &bur){
    if (bur.getGrade() > this->_gradeToSign) { throw GradeTooLowException(); }
	if (this->_isSigned == true) { throw FormAlreadyAssignedException(); }
	this->_isSigned = true;
}

// ==== Getters and Setters ==================================================//
std::string AForm::getName( void ) const {return this->_name;}
bool        AForm::getSigned( void ) const {return this->_isSigned;}
int         AForm::getGradeSign( void ) const {return this->_gradeToSign;}
int         AForm::getGradeExec( void ) const {return this->_gradeToExec;}
