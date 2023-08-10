#include "../includes/Dog.hpp"

//======================== Constructors e Desctructor ========================//
Dog::Dog(){
    this->_brain = new Brain;
    this->setType("Dog");
    std::cout << GREEN << this->type << " = "<< RES
    << "Default Constructor Called!" << std::endl;
}

Dog::Dog(const Animal &copy) : Animal(copy){
    this->setType("Dog");
    std::cout << GREEN << this->getType() << " = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

Dog::~Dog(){
    std::cout << GREEN << this->getType() << " = " << RES
    << "Destructor Called!" << std::endl;
    delete this->_brain;
}


//============================ Member Functions ==============================//
void Dog::makeSound(void) const {
    std::cout << GREEN << this->getType() << " = " << RES
    << "AU AU OSWALDO" << std::endl;
}

Brain *Dog::getBrain(void) const {return (this->_brain);}

//================================ Overloads =================================//
Dog  &Dog::operator=(const Dog& copy){
    if (this != &copy){
        this->type = copy.getType();
        std::cout << GREEN << this->getType() << " = " << RES
        << "Copy Assign Called!" << std::endl;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const Dog &o){
    output << GREEN << "Value = " << o.getType() << RES;
    return (output);
}
