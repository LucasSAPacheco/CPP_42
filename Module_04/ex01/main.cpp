#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"
#include "includes/Brain.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
    std::cout << std::setw(35 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
}

int main( void ) {
    printTitle("Constructors");
    Animal *animal = new Animal;
    Cat *cat = new Cat;
    Cat *cat2 = new Cat(*cat);
    Dog *dog = new Dog;
    // WrongAnimal *wAnimal = new WrongAnimal;
    // WrongCat *wCat = new WrongCat;
    // Animal *copy(cat);

    std::cout << std::endl;
    printTitle("Sounds and Type");
    animal->makeSound();
    std::cout << std::endl;
    cat->makeSound();
    std::cout << std::endl;
    dog->makeSound();

    std::cout << std::endl;
    printTitle("Brain tests");
    for (int i = 0; i < 100; i++){
        if (i < 50){
            std::cout << cat2->getBrain()->getIdeas(i) << std::endl;
        } else {
            std::cout << dog->getBrain()->getIdeas(i) << std::endl;
        }
    }
    

    std::cout << std::endl;
    printTitle("Destructors");
    delete animal;
    delete cat;
    delete cat2;
    delete dog;
    return 0;
}