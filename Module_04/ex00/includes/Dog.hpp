#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const Animal &copy);
        ~Dog();

        Dog &operator=(const Dog& copy);

        void makeSound(void) const;
};
    
std::ostream &operator<<(std::ostream &output, const Dog &o);

#endif