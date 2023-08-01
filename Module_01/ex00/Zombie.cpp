#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie( void ){
    std::cout << "The zombie " << this->_name << " has been defused!" << std::endl;
}

void Zombie::announce( void ){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getZombieName( void ) {return this->_name; }
