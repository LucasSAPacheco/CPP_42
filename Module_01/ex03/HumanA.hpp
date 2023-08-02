#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA{
    private:
        std::string _name;
        Weapon const& _weapon;

    public:
        HumanA(std::string name, Weapon const& weapon);
        ~HumanA();
        void attack(void);
    
};

#endif