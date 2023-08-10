#include "../includes/Brain.hpp"
#include "../includes/Animal.hpp"


//======================== Constructors and Destructors ======================//
Brain::Brain(){
    for (int i = 0; i < 100; i++){this->_ideas[i] = "I have no idea";}
    std::cout << PINK << "Brain = " << RES 
    << "Default Constructor Called!"
    << std::endl;
}

Brain::Brain(const Brain& copy){
    std::cout << PINK << "Brain = " << RES 
    << "Copy Constructor Called!"
    << std::endl;
    *this = copy;
}

Brain::~Brain(){
    std::cout << PINK << "Brain = " << RES
    << "Destrotuctor Called!"
    << std::endl;
}


//========================== Member Functions ================================//
std::string Brain::getIdeas(int index){
    if (index >= 0 && index < 100)
        return (this->_ideas[index]);
    return (NULL);
}

void Brain::setIdeas(int index, std::string idea){
    if (index >= 0 && index < 100)
        this->_ideas[index] = idea;
    else {std::cout << RED << "INVALID INDEX" << RES << std::endl;}
}


//=============================== Overloads ==================================//
Brain &Brain::operator=(const Brain &copy){
    if (this != &copy){
        for (int i = 0; i < 100; i++){this->_ideas[i] = copy._ideas[i];}
        std::cout << PINK << "Brain = " << RES 
        << "Copy Assignment Called!"
        << std::endl;
    }
    return (*this);
}