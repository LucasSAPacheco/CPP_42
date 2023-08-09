#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &copy);
        FragTrap(const ClapTrap &copy);
        ~FragTrap();

        FragTrap &operator=(const FragTrap &op);

        void highFivesGuys(void);
};


std::ostream &operator<<(std::ostream output, const FragTrap &o);


#endif