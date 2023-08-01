#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
    private:
        std::string _name;
    
    public:
        void announce( void );
        void set_zombie_name( std::string name );
        std::string getZombieName( void );

    Zombie( std::string name );
    Zombie(void);
    ~Zombie( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int n, std::string name );

#endif