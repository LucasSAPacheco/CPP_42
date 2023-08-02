#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB{
    private:
        std::string _name;
        Weapon  *_weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon &weapon);
    
};

#endif