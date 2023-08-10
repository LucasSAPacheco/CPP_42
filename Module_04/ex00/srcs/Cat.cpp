#include "../includes/Cat.hpp"

//======================== Constructors e Desctructor ========================//
Cat::Cat(){
    this->setType("Cat");
    std::cout << CYAN << this->type << " = "<< RES
    << "Default Constructor Called!" << std::endl;
}

Cat::Cat(const Animal &copy) : Animal(copy){
    this->setType("Cat");
    std::cout << CYAN << this->getType() << " = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

Cat::~Cat(){
    std::cout << CYAN << this->getType() << " = " << RES
    << "Destructor Called!" << std::endl;
}


//============================ Member Functions ==============================//
void Cat::makeSound(void) const {
    std::cout << CYAN << this->getType() << " = " << RES
    << "Miauuuuu Meawwwwwwwwwwww" << std::endl;
}


//================================ Overloads =================================//
Cat  &Cat::operator=(const Cat& copy){
    if (this != &copy){
        this->type = copy.getType();
        std::cout << CYAN << this->getType() << " = " << RES
        << "Copy Assign Called!" << std::endl;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const Cat &o){
    output << CYAN << "Value = " << o.getType() << RES;
    return (output);
}
