#include "./PhoneBook.hpp"

int main(void){
    PhoneBook phone_book;
    std::string input;

    menu(WELCOME);
	while (true)
	{
		std:: getline(std::cin, input); 
		if (std::cin.eof() || std::cin.fail()) {
			std::cin.clear();
			input.clear();
			break ;
		}
		if (input.empty()) {
			std::cin.clear();
			input.clear();
		}
		if (input == ADD) {
			add_screen(phone_book);
		}
		else if (input == SEARCH) {
            if (phone_book.size != 0) {
			    search(phone_book);
            }
			else
            	std::cout << "No contacts to search for." << std::endl;
		}
		else if (input == EXIT) {
			break ;
		}
		menu(OPTIONS);
	}
    return (0);
}