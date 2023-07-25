#include <iostream>
#include <stdlib.h>
#include <cctype>

# define ERROR "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

void check_args(int argc){
    if (argc == 1){
        std::cout << ERROR << std::endl;
        exit(0);
    }
}

void print_upper(char *str){
    for (int i = 0; str[i]; i++)
        str[i] = (char)toupper(str[i]);
    std::cout << str;
}

void receive_strings(char **argv){
    for (int i = 1; argv[i]; i++){
        print_upper(argv[i]);
        if (argv[i + 1])
            std::cout << " ";
        else if (argv[i + 1] == NULL){
            std::cout << std::endl;
            return;
        }
    }
}

int main(int argc, char **argv){
    check_args(argc);
    receive_strings(argv);
    return (0);
}
