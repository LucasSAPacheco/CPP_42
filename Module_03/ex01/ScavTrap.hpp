#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string const name);
        ScavTrap(const ClapTrap &copy);
        ScavTrap(ScavTrap const &copy);
        ~ScavTrap();

        ScavTrap& operator=(ScavTrap const & op);

        void guardGate(void);
};

std::ostream& operator<<(std::ostream& output,const ScavTrap& os);

#endif