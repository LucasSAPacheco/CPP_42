#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define MAGENTA "\033[35m"
# define RED "\x1b[38;5;88m"
# define GREEN "\x1b[38;5;40m"
# define BLUE "\x1b[38;5;25m"
# define ORANGE	"\033[0;38;5;166m"
# define LIGHT_PURPLE "\033[1;35m"
# define PINK	"\033[1;38;5;218m"
# define YELLOW "\x1b[38;5;220m"
# define CYAN "\001\e[0;36m\002"
# define RES "\x1b[0m"

#include <algorithm>
#include <stdexcept>
#include <exception>

template <typename T>
typename T::iterator easyFind(T &c, int n) {
  typename T::iterator it = std::find(c.begin(), c.end(), n);
  if (it == c.end()) {
    throw std::out_of_range("Value not found in container");
  }
  return (it);
}

#endif