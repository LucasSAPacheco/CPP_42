#include <iostream>
#include <string>

int main() {
    std::string myString = "HI THIS IS BRAIN";
    std::string* stringPTR = &myString; // Guardar endereço.
    std::string& stringREF = myString; // Extender Variável.

    std::cout << "Adress of myString: " << &myString << std::endl;
    std::cout << "Adress of stringPTR: " << &*stringPTR << std::endl;
    std::cout << "Adress of stringREF: " << &stringREF << "\n" << std::endl;

    std::cout << "Value of myString: " << myString << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return 0;
}
