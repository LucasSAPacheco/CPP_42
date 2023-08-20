#include "../includes/ScalarConverter.hpp"

int main (int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return 1;
    }
    try {
        ScalarConverter::convert(argv[1]);}
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}