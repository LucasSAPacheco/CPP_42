#include "../includes/WrongAnimal.hpp"

//======================== Constructors e Desctructor ========================//
WrongAnimal::WrongAnimal(){
    this->setType("WrongAnimal");
    std::cout << PINK << this->type << " = "<< RES
    << "Default Constructor Called!" << std::endl;
}

WrongAnimal::WrongAnimal(const Animal &copy) : Animal(copy){
    this->setType("WrongAnimal");
    std::cout << PINK << this->getType() << " = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(){
    std::cout << PINK << this->getType() << " = " << RES
    << "Destructor Called!" << std::endl;
}


//============================ Member Functions ==============================//
void WrongAnimal::makeSound(void) const {
    std::cout << PINK << this->getType() << " = " << RES
    << "tsssss, raaaaawwwwrrrr, greeg, pocoto, What's that?" << std::endl;
}


//================================ Overloads =================================//
WrongAnimal  &WrongAnimal::operator=(const WrongAnimal& copy){
    if (this != &copy){
        this->type = copy.getType();
        std::cout << PINK << this->getType() << " = " << RES
        << "Copy Assign Called!" << std::endl;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const WrongAnimal &o){
    output << PINK << "Value = " << o.getType() << RES;
    return (output);
}
