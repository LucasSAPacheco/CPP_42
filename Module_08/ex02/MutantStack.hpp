#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iomanip>
# include <stack>
# include <list>

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

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void ) {};
		MutantStack(const MutantStack &ms)
		{
			*this = ms;
		}
		MutantStack &operator=(const MutantStack &ms)
		{
			if (this != &ms)
				*this = ms;
			return (*this);
		}
		~MutantStack( void ) {};

		typedef typename std::deque<T>::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif