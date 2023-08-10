#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal{
    public:
        WrongCat();
        WrongCat(const Animal &copy);
        ~WrongCat();

        WrongCat &operator=(const WrongCat& copy);

        void makeSound(void) const;
};
    
std::ostream &operator<<(std::ostream &output, const WrongCat &o);

#endif