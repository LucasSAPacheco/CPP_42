#include "PhoneBook.hpp"

void	truncated(std::string InfoContact)
{
	int i;

	i = 0;
	if (InfoContact.length() >= 10)
	{
		while (i <= 9)
		{
			if (i == 9)
				InfoContact[i] = '.';
			std::cout << std::right << InfoContact[i];
			i++;
		}
	}
	else
	{
		std::cout << std::right << std::setfill(' ') << std::setw(10);
		std::cout << InfoContact;	
	}
	
}