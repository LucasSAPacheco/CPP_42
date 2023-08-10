#include "Bureaucrat.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
    std::cout << std::setw(35 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
}

void testConstructors(void){
    printTitle("TEST CONSTRUCTORS");
    Bureaucrat buro;
    Bureaucrat buro1("Lucas", 2);
    Bureaucrat buro2("Pedro", 149);

    std::cout << std::endl;
    printTitle("Prints do Operator <<");
    std::cout << buro << std::endl;
    std::cout << buro1 << std::endl;
    std::cout << buro2 << std::endl;

    std::cout << std::endl;
    printTitle("Destructors");
}

void testCopy(void){
    printTitle("TEST COPY");
    Bureaucrat buro;
    Bureaucrat copy(buro);
    Bureaucrat receive;

    receive = buro;

    std::cout << std::endl;
    printTitle("Prints do Operator <<");
    std::cout << copy << std::endl;
    std::cout << receive << std::endl;

    std::cout << std::endl;
    printTitle("Destructors");
}

void testException(void){
    printTitle("EXCEPTION TESTS");
    Bureaucrat buro("Lucas", 1);
    Bureaucrat buro1("Pedro", 150);

    printTitle("Excpetion Low and High grade");
    std::cout << buro << std::endl;
    std::cout << buro1 << std::endl;
    try {
        buro.incrementGrade(1);
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try {
        buro1.decrementGrade(1);
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    printTitle("Destructors");
}

int main( void ){
    // testConstructors();
    // testCopy();
    testException();

    return (0);
}