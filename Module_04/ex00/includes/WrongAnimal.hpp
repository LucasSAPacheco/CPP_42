#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal : public Animal{
    public:
        WrongAnimal();
        WrongAnimal(const Animal &copy);
        ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal& copy);

        void makeSound(void) const;
};
    
std::ostream &operator<<(std::ostream &output, const WrongAnimal &o);

#endif