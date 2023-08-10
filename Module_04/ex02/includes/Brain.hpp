#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain{
    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();

        Brain &operator=(const Brain &copy);

        std::string getIdeas(int index);
        void setIdeas(int index, std::string idea);

    private:
        std::string _ideas[100];
};

#endif