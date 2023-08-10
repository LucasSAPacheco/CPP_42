#include "../includes/Animal.hpp"

//======================== Constructor and Destructor ========================//
Animal::Animal( void ) : type("Animal"){
    std::cout << YELLOW << "Animal = " << RES
    << "Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal& copy) : type("Animal"){
    std::cout << YELLOW << "Animal = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

Animal::~Animal(){
    std::cout << YELLOW << "Animal = " << RES
    << "Destructor Called!" << std::endl;
}


///=========================== Membes Functions ==============================//
void Animal::makeSound( void ) const {
    std::cout << YELLOW << this->getType() << " = " << RES
    << "CHEWWWWWWW CHEWWWWWW, maybe a Chewbacca, who knows?!!"
    << RES << std::endl;
}


//================================ Overloads =================================//
Animal &Animal::operator=(const Animal& copy){
    if (this != &copy){
        this->type = copy.getType();
        std::cout << YELLOW << "Animal = " << RES
        << "Copy Assign Operator Called" << std::endl;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const Animal &o){
    output << YELLOW << "Operator \"<<\" Called from = " << o.getType()
    << RES;
    return (output);
}


//=========================== Getters and Setters ============================//
std::string Animal::getType(void) const {return this->type;}
void Animal::setType(std::string type){this->type = type;}