#include "Zombie.hpp"

int main(void){
    Zombie *teste;

    teste = newZombie("Rick");
    teste->announce();
    delete teste;
    randomChump("Morty");
}
