#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

# define YELLOW "\x1b[38;5;220m"
# define BLUE "\x1b[38;5;25m"
# define RES "\x1b[0m"

template<typename T>
void iter(T* array, size_t size, void (*f)(T& elem)){
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

template <typename T>
size_t	getSize(const T& array)
{
	return sizeof(array) / sizeof(array[0]);
}

template <typename T>
void    print(T& elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void	plusTen(T& elem)
{
	elem += 10;
}

#endif