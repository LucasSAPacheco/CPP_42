#include "ClapTrap.hpp"

//====================== Constructor - Destructor ============================//
ClapTrap::ClapTrap() : _name("SIMPLE-BOT"), _hitPoints(10), _energyPoints(10), _attackDamage(0), _type("ClapTrap") {
    std::cout << GREEN << "ClapTrap = " << RES 
    << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _type("ClapTrap") {
    std::cout << GREEN << "ClapTrap = " << RES 
    << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << GREEN << "ClapTrap = " << RES 
    << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap() {
    std::cout << GREEN << "ClapTrap = " << RES  
    << " Destructor called" << std::endl;
}


//========================= Operator overloads ===============================//
ClapTrap& ClapTrap::operator=(const ClapTrap& op) {
    std::cout << GREEN << "ClapTrap = " << RES 
    << "Assignation operator called" << std::endl;
    if (this != &op) {
        this->_name = op._name;
        this->_hitPoints = op._hitPoints;
        this->_energyPoints = op._energyPoints;
        this->_attackDamage = op._attackDamage;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream &output, const ClapTrap& op) {
    output << op.getName();
    return (output);
}

//========================== Getters and Setters =============================//
std::string ClapTrap::getName(void) const {return (this->_name);}
std::string ClapTrap::getType(void) const {return (this->_type);}
int ClapTrap::getHitPoints(void) const {return (this->_hitPoints);}
int ClapTrap::getEnergyPoints(void) const {return (this->_energyPoints);}
int ClapTrap::getAttackDamage(void) const {return (this->_attackDamage);}

void ClapTrap::setName(std::string name){this->_name = name;}
void ClapTrap::setType(std::string type){this->_type = type;}
void ClapTrap::setHitPoints(int hitPoints){this->_hitPoints = hitPoints;}
void ClapTrap::setEnergyPoints(int energyPoints){this->_energyPoints = energyPoints;}
void ClapTrap::setAttackDamage(int attackDamage){this->_attackDamage = attackDamage;}

//============================== Member functions ============================//
void ClapTrap::attack(const std::string& target){
    std::string color;
    if (this->getType() == "ClapTrap"){color = GREEN;} 
    else if (this->getType() == "ScavTrap"){color = MAGENTA;}
    else {color = CYAN;};
    if (this->_energyPoints > 0 && this->_hitPoints > 0){
        std::cout << color << this->getType() << " = " << RES 
        << this->_name << " attacks " << target
        << ", causing " 
        << this->_attackDamage
        << " points of damage!"
        << RED
        << " [HP: " << getHitPoints() << "]"
        << "[Energy: " << getEnergyPoints() << "]" << RES
        << std::endl;
        this->_energyPoints--;
    } else if (this->_energyPoints <= 0){
        std::cout << color << this->getType() << " = " << RES
        << this->_name
        << " have no more energy to attack!"
        << RED
        << " [HP: " << getHitPoints() << "]"
        << "[Energy: " << getEnergyPoints() << "]" << RES
        << std::endl;
    } else {
        std::cout << color << this->getType() << " = " << RES
        << this->_name << " is dead to release this attack!"
        << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::string color;
    if (this->getType() == "ClapTrap"){color = GREEN;} 
    else if (this->getType() == "ScavTrap"){color = MAGENTA;}
    else {color = CYAN;}
    if (this->_hitPoints > 0){
        this->_hitPoints = this->_hitPoints - amount;
        std::cout << color << this->getType() << " = " << RES 
        << getName() << " received "
        << amount << " of damage!" 
        << RED
        << " [HP: " << getHitPoints() << "]"
        << "[Energy: " << getEnergyPoints() << "]" << RES
        << std::endl;
        if (this->_hitPoints <= 0){
            std::cout << color << this->getType() << " = " << RES 
            << getName() << " died now for this amazing attack!"
            << std::endl;
        }
    } else {
        std::cout << color << this->getType() << " = " << RES 
        << this->_name << " is already dead" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::string color;
    if (this->getType() == "ClapTrap"){color = GREEN;} 
    else if (this->getType() == "ScavTrap"){color = MAGENTA;}
    else {color = CYAN;}
    if (this->_hitPoints > 0 && this->_energyPoints > 0){
        this->_hitPoints += amount;
        std::cout << color << this->getType() << " = " << RES 
        << getName()
        << " was healed by: " << amount
         << RED
        << " [HP: " << getHitPoints() << "]"
        << "[Energy: " << getEnergyPoints() << "]" << RES
        << std::endl;
        this->_energyPoints--;
    } else if (getEnergyPoints() <= 0){
        std::cout << color << this->getType() << " = " << RES 
        << getName()
        << " is without energy to to cast heal spell!"
        << RED
        << " [HP: " << getHitPoints() << "]"
        << "[Energy: " << getEnergyPoints() << "]" << RES
        << std::endl;
    }
}
