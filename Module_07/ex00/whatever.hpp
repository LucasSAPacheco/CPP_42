#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# define YELLOW "\x1b[38;5;220m"
# define BLUE "\x1b[38;5;25m"
# define RES "\x1b[0m"

#include <string>
#include <iostream>
#include <iomanip>

template<typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T &min(T &a, T &b){
    return (a < b ? a : b);
}

template<typename T>
T &max(T &a, T &b){
    return (a > b ? a : b);
}

#endif