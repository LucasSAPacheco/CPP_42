#include "iter.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
    std::cout << std::setw(35 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
}

int main(void){
    const int intArray[5] = {1, 2, 3, 4, 5};
    int intArray2[5] = {1, 2, 3, 4, 5};

    printTitle("Print int array");
    iter(intArray, 5, print);
    iter(intArray2, 5, print);
    iter(intArray2, 5, plusTen);
    iter(intArray2, 5, print);
    std::cout << std::endl;

    printTitle("Print char array");
    std::string stringArray[3] = {"one", "two", "three"};
    iter(stringArray, 3, print);
    std::cout << std::endl;


    return 0;
}