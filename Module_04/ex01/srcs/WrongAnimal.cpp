#include "../includes/WrongAnimal.hpp"

//======================== Constructor and Destructor ========================//
WrongAnimal::WrongAnimal( void ) : type("WrongAnimal"){
    std::cout << YELLOW << "WrongAnimal = " << RES
    << "Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type("WrongAnimal"){
    std::cout << YELLOW << "WrongAnimal = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(){
    std::cout << YELLOW << "WrongAnimal = " << RES
    << "Destructor Called!" << std::endl;
}


///=========================== Membes Functions ==============================//
void WrongAnimal::makeSound( void ) const {
    std::cout << YELLOW << this->getType() << " = " << RES
    << "CHEWWWWWWW CHEWWWWWW, maybe a Chewbacca, who knows?!!"
    << RES << std::endl;
}


//================================ Overloads =================================//
WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy){
    if (this != &copy){
        this->type = copy.getType();
        std::cout << YELLOW << "WrongAnimal = " << RES
        << "Copy Assign Operator Called" << std::endl;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const WrongAnimal &o){
    output << YELLOW << "Operator \"<<\" Called from = " << o.getType()
    << RES;
    return (output);
}


//=========================== Getters and Setters ============================//
std::string WrongAnimal::getType(void) const {return this->type;}
void WrongAnimal::setType(std::string type){this->type = type;}