#include "iter.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
    std::cout << std::setw(35 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
}

int main(void){
    int intArray[] = {1, 2, 3, 4, 5};

    printTitle("Print int array");
    iter(intArray, getSize(intArray), print);
    iter(intArray, getSize(intArray), plusTen);
    iter(intArray, getSize(intArray), print);
    std::cout << std::endl;

    printTitle("Print char array");
    std::string stringArray[] = {"one", "two", "three"};
    iter(stringArray, getSize(stringArray), print);
    std::cout << std::endl;


    return 0;
}