#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

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


void	print_make_robotomy( void )
{
	{
		printTitle("ROBOTOMY - MAKE FORME");
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat b("Zé", 1);
		b.signForm(*rrf);
		b.executeForm(*rrf);
		delete rrf;
	}
}

void print_make_shrubbert( void ) 
{
	{
		printTitle("SHRUBBERT - MAKE FORME");
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat b("Zé", 1);
		b.signForm(*rrf);
		b.executeForm(*rrf);
		delete rrf;
	}
}

void	print_make_presidential( void )
{
	{
		printTitle("PRESIDENTIAL - MAKE FORM");
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat b("Zé", 1);
		b.signForm(*rrf);
		b.executeForm(*rrf);
		delete rrf;
	}
}

void	print_make_error( void )
{
	{
		printTitle("KO - MAKE FORM");
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("some random name", "Bender");
		delete rrf;
	}
}

int main()
{
	print_make_robotomy();
	print_make_shrubbert();
	print_make_presidential();
	print_make_error();
	return (0);
}
