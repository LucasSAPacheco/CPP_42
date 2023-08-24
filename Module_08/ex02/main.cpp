#include "MutantStack.hpp"

void printTitle(std::string str){
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
    std::cout << std::setw(35 - (str.length() / 2)) 
    << std::setfill(' ') << YELLOW << str << RES << std::endl;
    std::cout << BLUE << std::string(49, '=') << RES << std::endl;
}

int main( void )
{
	{
		printTitle("MutantStack");
		MutantStack<int> mstack;
		// MutantStack<int> mstack2;
		
		mstack.push(1);
		mstack.push(20);
		
		std::cout << "Last Element of Stack: " << mstack.top() << std::endl;
		
		mstack.pop();
		mstack.push(5);
		mstack.push(10);
		mstack.push(30);
		mstack.push(0);

		MutantStack<int>::iterator itBegin = mstack.begin();
		
        std::cout << "Value of Actual iterator = " << *itBegin << std::endl;
		++itBegin;
        std::cout << "Value of Next iterator = " << *itBegin << std::endl;
		--itBegin;
		while (itBegin != mstack.end())
		{
			std::cout << *itBegin << std::endl;
			++itBegin;
		}

		// mstack2 = mstack; // Teste do operador de igual
        // Passando o MutantStack para um container std::stack
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		printTitle("List");
		std::list<int> list;
		list.push_back(1);
		list.push_back(20);
		std::cout << "Last Element of List: " << list.back() << std::endl;
		list.pop_back();
		list.push_back(5);
		list.push_back(10);
		list.push_back(30);
		list.push_back(0);
	
		std::list<int>::iterator itBegin = list.begin();
	
        std::cout << "Value of Actual iterator = " << *itBegin << std::endl;
		++itBegin;
        std::cout << "Value of Next iterator = " << *itBegin << std::endl;
		--itBegin;
		while (itBegin != list.end())
		{
			std::cout << *itBegin << std::endl;
			++itBegin;
		}
	}
	return (0);
}