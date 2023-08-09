#include "FragTrap.hpp"

// Hit points (100), represent the health of the ClapTrap
// • Energy points (100)
// • Attack damage (30)
//====================== Constructor - Destructor ============================//
FragTrap::FragTrap() : ClapTrap(){
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    this->setType("FragTrap");
    std::cout << CYAN << this->getType() << " = " << RES
    << "Default constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name){
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    this->setType("FragTrap");
    std::cout << CYAN << this->getType() << " = " << RES
    << "Name constructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy) {
    *this = copy;
    std::cout << CYAN << this->getType() << " = " << RES
    << "Copy Constructor Called!" << std::endl;
}

FragTrap::FragTrap(const ClapTrap  &copy) : ClapTrap(copy) {
    this->_hitPoints = copy.getHitPoints();
    this->_energyPoints = copy.getEnergyPoints();
    this->_attackDamage = copy.getAttackDamage();
}

FragTrap::~FragTrap(){
    std::cout << CYAN << "FragTrap = " << RES
    <<"Destructor Called!"<<std::endl;
}


//========================= Operator overloads ===============================//
FragTrap &FragTrap::operator=(const FragTrap &op){
    if (this != &op){
        std::cout << CYAN << "FragTrap = " << RES
        << "Copy Assignment Called!" << std::endl;
        this->_name = op.getName();
        this->_hitPoints = op.getHitPoints();
        this->_energyPoints = op.getHitPoints();
        this->_attackDamage = op.getAttackDamage();
        this->_type = "FragTrap";
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const FragTrap &o){
    output << o.getName();
    return(output);
}


//============================== Member functions ============================//
void FragTrap::highFivesGuys(void){
    if (this->_hitPoints <= 0){
        std::cout << CYAN << "FragTrap = " << RES
        << this->getName() << " says: Why do you do this to me??"
        << std::endl;
    } else {
        std::cout << CYAN << "FragTrap = " << RES
        << "Evebody is happyyyyy high fives O/\\O"
        << std::endl;
    }
}