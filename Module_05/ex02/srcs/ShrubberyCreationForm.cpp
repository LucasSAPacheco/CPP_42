#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

// ==== Constructors and destructor ==========================================//
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), _target("Default") {
    std::cout << "ShrubberyCreationForm Default Constructor Called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm Parameter Constructor Called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {
    std::cout << "ShrubberyCreationForm Copy Constructor Called!" << std::endl;
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Destructor Called!" << std::endl;
}


// ==== Overloads ============================================================//
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    std::cout << "ShrubberyCreationForm Assignation Operator Called!" << std::endl;
    if (this != &copy)
        this->_target = copy._target;
    return (*this);
}


// ==== Member Functions =====================================================//
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	std::ofstream	ofs;
	std::string		outFile; 
	
    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    else
	    outFile = this->_target + "_shrubbery";
	ofs.open(outFile.c_str());
	if (ofs.fail())
		return ;
    ofs << "      /\\\n"
        << "     /\\*\\\n"
        << "    /\\O\\*\\\n"
        << "   /*/\\/\\/\\\n"
        << "  /\\O\\/\\*\\/\\\n"
        << " /\\*\\/\\*\\/\\/\\\n"
        << "/\\O\\/\\/*/\\/O/\\\n"
        << "      ||\n"
        << "      ||\n"
        << "      ||\n"
        << std::endl;
	ofs.close();
}