#include "../includes/Cat.hpp"

//======================== Constructors e Desctructor ========================//
Cat::Cat(){
    this->_brain = new Brain;
    this->setType("Cat");
    std::cout << CYAN << this->type << " = "<< RES
    << "Default Constructor Called!" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy){
    this->setType("Cat");
    std::cout << CYAN << this->getType() << " = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
    this->_brain = new Brain(*copy._brain);
}

Cat::~Cat(){
    std::cout << CYAN << this->getType() << " = " << RES
    << "Destructor Called!" << std::endl;
    delete this->_brain;
}


//============================ Member Functions ==============================//
void Cat::makeSound(void) const {
    std::cout << CYAN << this->getType() << " = " << RES
    << "Miauuuuu Meawwwwwwwwwwww" << std::endl;
}

Brain *Cat::getBrain(void) const {return (this->_brain);}



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
