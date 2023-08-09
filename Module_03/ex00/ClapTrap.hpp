#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

# define MAGENTA "\033[35m"
# define RED "\x1b[38;5;88m"
# define GREEN "\x1b[38;5;40m"
# define BLUE "\x1b[38;5;25m"
# define ORANGE	"\033[0;38;5;166m"
# define LIGHT_PURPLE "\033[1;35m"
# define YELLOW "\x1b[38;5;220m"
# define CYAN "\001\e[0;36m\002"
# define RES "\x1b[0m"

class ClapTrap{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& op);

        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &output, const ClapTrap& op);

#endif