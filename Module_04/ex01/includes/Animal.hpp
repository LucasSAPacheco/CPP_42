#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Brain.hpp"

# define MAGENTA "\033[35m"
# define RED "\x1b[38;5;88m"
# define GREEN "\x1b[38;5;40m"
# define BLUE "\x1b[38;5;25m"
# define ORANGE	"\033[0;38;5;166m"
# define LIGHT_PURPLE "\033[1;35m"
# define PINK	"\033[1;38;5;218m"
# define YELLOW "\x1b[38;5;220m"
# define CYAN "\001\e[0;36m\002"
# define RES "\x1b[0m"

class Animal{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal& copy);
        virtual ~Animal();

        Animal &operator=(const Animal& copy);

        virtual void makeSound( void ) const;
        std::string		getType( void ) const ;
		void			setType( std::string value );
};

std::ostream &operator<<(std::ostream &output, const Animal &o);

#endif