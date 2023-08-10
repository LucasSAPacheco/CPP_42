#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal& copy);

        void makeSound( void ) const;
        std::string		getType( void ) const ;
		void			setType( std::string value );
};

std::ostream &operator<<(std::ostream &output, const WrongAnimal &o);

#endif