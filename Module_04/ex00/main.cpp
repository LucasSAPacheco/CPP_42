#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(60, '=') << RES << std::endl;
    std::cout << std::setw(40 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(60, '=') << RES << std::endl;
}

int main(void){
    {
        printTitle("Constructors");
        Animal *animal = new Animal;
        Animal *cat = new Cat;
        Animal *dog = new Dog;
        WrongAnimal *isAnimal = new WrongCat;

        std::cout << std::endl;
        printTitle("Sounds");
        animal->makeSound();
        cat->makeSound();
        dog->makeSound();
        isAnimal->makeSound();

        std::cout << std::endl;
        printTitle("Destructors");
        delete animal;
        delete cat;
        delete dog;
        delete isAnimal;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
    {
		printTitle("Copies");
		Animal*	meta = new Animal();
		Dog		doggy;
		Cat		kitty;

		printTitle("Copy constructors");
		Animal	metaCopy(*meta);
		Dog		doggyCopy(doggy);
		Cat		kittyCopy(kitty);

		printTitle("Copy Types");
		std::cout << metaCopy.getType() << std::endl;
		std::cout << doggyCopy.getType() << std::endl;
		std::cout << kittyCopy.getType() << std::endl;

		printTitle("Copy Sounds");
		metaCopy.makeSound();
		doggyCopy.makeSound();
		kittyCopy.makeSound();

		printTitle("Destructors");
		delete meta;
	}
}