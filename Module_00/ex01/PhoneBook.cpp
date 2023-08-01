#include "PhoneBook.hpp"
#include <cctype>
# include <iostream>
# include <string>
# include <iomanip>

PhoneBook::PhoneBook(){
    this->oldest = 0;
    this->size = 0;
}

PhoneBook::~PhoneBook(){return;}

