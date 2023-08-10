#include "../includes/WrongCat.hpp"

//======================== Constructors e Desctructor ========================//
WrongCat::WrongCat(){
    this->setType("WrongCat");
    std::cout << ORANGE << this->type << " = "<< RES
    << "Default Constructor Called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    this->setType("WrongCat");
    std::cout << ORANGE << this->getType() << " = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat(){
    std::cout << ORANGE << this->getType() << " = " << RES
    << "Destructor Called!" << std::endl;
}


//============================ Member Functions ==============================//
void WrongCat::makeSound(void) const {
    std::cout << ORANGE << this->getType() << " = " << RES
    << "Grrrrrrr, ROAAAAAAAAAAAAAAAAAAAAAAR! It's is too " 
    << "scary!" << std::endl;
}


//================================ Overloads =================================//
WrongCat  &WrongCat::operator=(const WrongCat& copy){
    if (this != &copy){
        this->type = copy.getType();
        std::cout << ORANGE << this->getType() << " = " << RES
        << "Copy Assign Called!" << std::endl;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const WrongCat &o){
    output << ORANGE << "Value = " << o.getType() << RES;
    return (output);
}