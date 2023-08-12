#include "../includes/PresidentialPardonForm.hpp"

// ==== Constructors and destructor ==========================================//
PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), _target("Default") {
    std::cout << "PresidentialPardonForm Default Constructor Called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5), _target(target) {
    std::cout << "PresidentialPardonForm Parameter Constructor Called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy) {
    std::cout << "PresidentialPardonForm Copy Constructor Called!" << std::endl;
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor Called!" << std::endl;
}


// ==== Overloads ============================================================//
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    std::cout << "PresidentialPardonForm Assignation Operator Called!" << std::endl;
    if (this != &copy)
        this->_target = copy._target;
    return (*this);
}


// ==== Member Functions =====================================================//
void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
