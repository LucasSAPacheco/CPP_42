#include "ScavTrap.hpp"


//====================== Constructor - Destructor ============================//
ScavTrap::ScavTrap() : ClapTrap(){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    this->setType("ScavTrap");
    std::cout << MAGENTA << this->getType() << " = " << RES
    <<"Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    this->setType("ScavTrap");
    std::cout << MAGENTA << this->getType() << " = " << RES
    << "Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(const ClapTrap &copy) : ClapTrap(copy) {
    this->_hitPoints = copy.getHitPoints();
    this->_energyPoints = copy.getEnergyPoints();
    this->_attackDamage = copy.getAttackDamage();
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap(copy) {
    std::cout << MAGENTA << copy.getType() << " = " << RES
    << "Copy Constructor Called!" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(){
    std::cout << MAGENTA << "ScavTrap = " << RES
    <<"Destructor Called!"<<std::endl;
}


//========================= Operator overloads ===============================//
ScavTrap &ScavTrap::operator=(ScavTrap const & op){
    if (this != &op){
        std::cout << MAGENTA << op.getType() << " = " << RES
        << "Copy Assignment Called!" << std::endl;
        this->_name = op.getName();
        this-> _hitPoints = op.getHitPoints();
        this->_energyPoints = op.getEnergyPoints();
        this->_attackDamage = op.getAttackDamage();
        this->_type = "ScavTrap";
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& output,const ScavTrap& os){
    output << os.getName();
    return (output);
}

//============================== Member functions ============================//
void ScavTrap::guardGate(void){
    if (this->_hitPoints <= 0){
        std::cout << MAGENTA << getType() << " = " << RES
        << getName()
        << " is died to enter in a gate keeper mode :'("
        << std::endl;
    } else {
        std::cout << MAGENTA << getType() << " = " << RES
        << getName()
        << " has entered in GATEE KEEPEEERR!"
        << std::endl;
    }
}