#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
    std::cout << std::setw(55 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
}

int main(void){
    printTitle("Constructor Claps");
    ClapTrap clap;
    ClapTrap clapName("DJ Rogerinho");
    ClapTrap clapCopy(clapName);
    ClapTrap clapAssign;
    clapAssign = clap;

    printTitle("Constructor Scavs");
    ScavTrap scav;
    ScavTrap scavName("Juninho Portugal");
    ScavTrap scavCopy(scavName);
    ScavTrap scavAssign;

    printTitle("Run out of energy - CLAP");
    for (int i = 0; i <= 10; i++){
        clap.attack(clapName.getName());
    }

    printTitle("Run out of energy - SCAV");
    for (int i = 0; i <= 50; i++){
        scav.attack(clapName.getName());
    }

    printTitle("Killing a CLAP");
    scavName.attack(clap.getName());
    clap.takeDamage(scavName.getAttackDamage());
    scavName.attack(clap.getName());
    clap.takeDamage(scavName.getAttackDamage());

    printTitle("Killing a SCAV");
    for (int i = 0; i <= 5; i++){
        scavName.attack(scav.getName());
        scav.takeDamage(scavName.getAttackDamage());
    }

    printTitle("Healing a NOOB CLAP");
    for (int i = 0; i <= 3; i++){
        clapName.beRepaired(3);
    }

    printTitle("Healing a BOSS SCAV");
    for (int i = 0; i <= 3; i++){
        scavName.beRepaired(12);
    }

    printTitle("Entering in GUARD MODEEEEE");
    scav.guardGate();
    scavName.guardGate();

    printTitle("Destructors");
}