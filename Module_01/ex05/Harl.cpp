#include "Harl.hpp"

Harl::Harl(void) { return; }

Harl::~Harl(void) { return; }

void Harl::debug(void) {
    std::cout << DEBUG << std::endl;
}

void Harl::info(void) {
    std::cout << INFO << std::endl;
}
    
void Harl::warning(void) {
    std::cout << WARNING << std::endl;
}

void Harl::error(void) {
    std::cout << ERROR << std::endl;
}

void Harl::complain( std::string level ) {
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string ourFunctions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (i <= 3) {
        if (level == ourFunctions[i]) {
            (this->*f[i])();
            return;
        }
        i++;
    }
    if (i == 4)
        std::cout << "error: Not match" << std::endl;
}
