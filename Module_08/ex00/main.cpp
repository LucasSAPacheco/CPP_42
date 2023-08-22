#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "easyfind.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
    std::cout << std::setw(35 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
}

void testVector(void){
    int intArr[] = {0, 10, 42, 512};
    std::vector<int> v(intArr, intArr + (sizeof(intArr) / sizeof(int)));
    std::vector<int>::iterator it;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);


    printTitle("Vector");
    try{
        it = easyFind(v, 1);
        std::cout << *it << std::endl;
        it = easyFind(v, 2);
        std::cout << *it << std::endl;
        it = easyFind(v, 3);
        std::cout << *it << std::endl;
        it = easyFind(v, 4);
        std::cout << *it << std::endl;
        it = easyFind(v, 8);
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}

int main ( void ){
    testVector();
    return (0);
}