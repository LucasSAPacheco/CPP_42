#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
    std::cout << std::setw(35 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
}

void print_separator(void)
{
	std::cout << CYAN << std::string(49, '-') << RES << std::endl;
}

void shurberyCreationFormTest(void)
{
	printTitle("ShrubberyCreationForm");
	Bureaucrat bureaucrat("Bureaucrat", 1);
	Bureaucrat bureaucrat2("Bureaucrat2", 150);
	ShrubberyCreationForm form("Home");
	ShrubberyCreationForm form2("Home2");
	print_separator();
	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	print_separator();
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
	std::cout << form << std::endl;
	print_separator();
	std::cout << bureaucrat2 << std::endl;
	std::cout << form2 << std::endl;
	print_separator();
	bureaucrat2.signForm(form2);
	bureaucrat2.executeForm(form2);
	std::cout << form2 << std::endl;
	print_separator();
}

void robotomyRequestFormTest(void)
{
	printTitle("RobotomyRequestForm");
	Bureaucrat bureaucrat("Bureaucrat", 1);
	Bureaucrat bureaucrat2("Bureaucrat2", 150);
	RobotomyRequestForm form("Home");
	RobotomyRequestForm form2("Home2");
	print_separator();
	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	print_separator();
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
	bureaucrat.executeForm(form);
	bureaucrat.executeForm(form);
	bureaucrat.executeForm(form);
	std::cout << form << std::endl;
	print_separator();
	std::cout << bureaucrat2 << std::endl;
	std::cout << form2 << std::endl;
	print_separator();
	bureaucrat2.signForm(form2);
	bureaucrat2.executeForm(form2);
	std::cout << form2 << std::endl;
	print_separator();
}

void presidentialPardonFormTest(void)
{
	printTitle("PresidentialPardonForm");
	Bureaucrat bureaucrat("Bureaucrat", 1);
	Bureaucrat bureaucrat2("Bureaucrat2", 150);
	PresidentialPardonForm form("Home");
	PresidentialPardonForm form2("Home2");
	print_separator();
	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	print_separator();
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
	std::cout << form << std::endl;
	print_separator();
	std::cout << bureaucrat2 << std::endl;
	std::cout << form2 << std::endl;
	print_separator();
	bureaucrat2.signForm(form2);
	bureaucrat2.executeForm(form2);
	std::cout << form2 << std::endl;
	print_separator();
}

int main()
{
	shurberyCreationFormTest();
	robotomyRequestFormTest();
	presidentialPardonFormTest();
	return (0);
}
