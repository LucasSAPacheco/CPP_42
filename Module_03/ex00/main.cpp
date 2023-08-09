#include "ClapTrap.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
    std::cout << std::setw(55 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
}

int main(void){
    printTitle("Constructors");
    ClapTrap clap;
    ClapTrap clapName("Lucas");
    ClapTrap clapCopy(clapName);
    ClapTrap clapAssign;

    clapAssign = clap;

    printTitle("Fight, Recover and Get Damage");
    for (int i = 0;i <= 10; i++){
        clapName.attack(clap.getName());
        if (i == 8)
            clapName.beRepaired(1);
    }

    printTitle("Clap Receiving damage");
    for (int j = 0; j < 3; j++){
        clap.takeDamage(4);
    }

    printTitle("Destructors");
}
// Fight, Recover and Get Damage