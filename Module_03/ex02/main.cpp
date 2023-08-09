#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
    std::cout << std::setw(55 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(90, '=') << RES << std::endl;
}

int main(void){
	printTitle("CONSTRUCTORS");
	ClapTrap clap("Lucas");
	FragTrap frag;
	FragTrap fragCopy(clap);
	FragTrap fragName("Laila");
	FragTrap fragAssign;
	fragAssign = frag;

	printTitle("FIGHT");
	for (int i = 0; i <= 4; i++){
		fragName.attack(frag.getName());
		frag.takeDamage(fragName.getAttackDamage());
	}
	fragName.attack(clap.getName());
	clap.takeDamage(fragName.getAttackDamage());

	printTitle("ENERGY AND HEAL TESTS");
	for (int i = 0; i <= 47; i++){
		fragName.attack(clap.getName());
		fragName.beRepaired(1);
	}

	printTitle("LAILA DETONOU GERAL");
	fragName.highFivesGuys();

	printTitle("DESTRUCTORS");
	return(0);
}