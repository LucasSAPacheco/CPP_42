#include "ClapTrap.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
    std::cout << std::setw(55 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
}

int main(void){
    printTitle("Constructors");
    ClapTrap test;
    ClapTrap lucas("Lucas");

    printTitle("Fight, Recover and Get Damage");
    for (int i = 0;i <= 10; i++){
        lucas.attack(test.getName());
        if (i == 9)
            lucas.beRepaired(1);
    }
    for (int j = 0; j < 3; j++)
        test.takeDamage(lucas.getAttackDamage());

    printTitle("Destructors");
}
// Fight, Recover and Get Damage