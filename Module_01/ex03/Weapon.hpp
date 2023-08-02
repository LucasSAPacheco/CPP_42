#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon{
    private:
        std::string _type;

    public:
        void setType( std::string type );
        std::string const & getType( void ) const;
        Weapon();
        Weapon(std::string type);
        ~Weapon();
};

#endif