#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>

// ==== Constructors and destructor ==========================================//
RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("Default") {
    std::cout << "RobotomyRequestForm Default Constructor Called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm Parameter Constructor Called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {
    std::cout << "RobotomyRequestForm Copy Constructor Called!" << std::endl;
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor Called!" << std::endl;
}


// ==== Overloads ============================================================//
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    std::cout << "RobotomyRequestForm Assignation Operator Called!" << std::endl;
    if (this != &copy)
        this->_target = copy._target;
    return (*this);
}


// ==== Member Functions =====================================================//
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    else {
        std::cout << "* drilling noises *" << std::endl;
        if (rand() % 2 == 0)
            std::cout << this->_target << " has been robotomized successfully." << std::endl;
        else
            std::cout << this->_target << " robotomization failed." << std::endl;
    }
}