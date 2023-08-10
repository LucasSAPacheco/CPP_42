#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Animal &copy);
        ~Cat();

        Cat &operator=(const Cat& copy);

        void makeSound(void) const;
        Brain *getBrain( void ) const;

    private:
        Brain *_brain;
};
    
std::ostream &operator<<(std::ostream &output, const Cat &o);

#endif