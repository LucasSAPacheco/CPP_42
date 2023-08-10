#include "../includes/AAnimal.hpp"

//======================== Constructor and Destructor ========================//
AAnimal::AAnimal( void ) : type("AAnimal"){
    std::cout << YELLOW << "AAnimal = " << RES
    << "Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) : type("AAnimal"){
    std::cout << YELLOW << "AAnimal = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal(){
    std::cout << YELLOW << "AAnimal = " << RES
    << "Destructor Called!" << std::endl;
}


//================================ Overloads =================================//
AAnimal &AAnimal::operator=(const AAnimal& copy){
    if (this != &copy){
        this->type = copy.getType();
        std::cout << YELLOW << "AAnimal = " << RES
        << "Copy Assign Operator Called" << std::endl;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const AAnimal &o){
    output << YELLOW << "Operator \"<<\" Called from = " << o.getType()
    << RES;
    return (output);
}


//=========================== Getters and Setters ============================//
std::string AAnimal::getType(void) const {return this->type;}
void AAnimal::setType(std::string type){this->type = type;}