#include "PhoneBook.hpp"

void	menu(int option)
{
	if (option == WELCOME)
	{
		std::cout << PIPE << std::string(42, EQUALS) << PIPE << RABA;
		std::cout << std::setw(34) << std::setfill(SPACE) << WELCOME_MSG << RABA;
		std::cout << PIPE << std::string(42, EQUALS) << PIPE << RABA;
	}
	else
		std::cout << std::string(44, HYPHEN) << RABA;
	std::cout << std::setw(31) << std::setfill(SPACE) << OPTIONS_MSG << RABA;
	std::cout << std::string(44, HYPHEN) << RABA;
}

void	add_screen(PhoneBook &phone_book)
{	
    int i = phone_book.oldest;
    name(phone_book.contacts[i]);
    last_name(phone_book.contacts[i]);
    nickname(phone_book.contacts[i]);
    phone_number(phone_book.contacts[i]);
    dark_secret(phone_book.contacts[i]);
    if (phone_book.size == MAX_CONTACTS) {
        if (phone_book.oldest == MAX_CONTACTS)
            phone_book.oldest = 0;
        phone_book.oldest++;
        std::cout << "CONTATCT ADDED" << RABA;
        return ;
    }
    if (phone_book.size < 8)
        phone_book.size++;
    std::cout << "CONTATCT ADDED" << RABA;
}

void	search_screen(PhoneBook &list)
{
	Contact	contact;
	int		i;

	i = 0;
	std::cout << "|"
	<< std::right << std::setfill(' ') << std::setw(10)
	<< "Index" << "|"
	<< std::right << std::setfill(' ') << std::setw(10) 
	<< "FirstName" << "|"
	<< std::right << std::setfill(' ') << std::setw(10)
	<< "LastName" << "|"
	<< std::right << std::setfill(' ') << std::setw(10)
	<< "NickName" << "|" << std::endl;
	while (i < list.size)
	{
		contact = list.contacts[i];
		std::cout << "|" << std::right << std::setfill(' ') << std::setw(10); 
		std::cout << i + 1 << "|"; 
		truncated(contact.get_first_name()); 
		std::cout << "|";
		truncated(contact.get_last_name());
		std::cout << "|";
		truncated(contact.get_nickname());
		std::cout << "|" << std::endl;
		i++;
	}	
}

void	search(PhoneBook &list) 
{
	std::string	id;
	int			i;
	
    while (1){
        search_screen(list);
        std::cout << std::endl;
        std::cout << "Insert the index: ";
        std::getline(std::cin, id);
        if (std::cin.eof() || std::cin.fail()) {
			std::cin.clear();
			id.clear();
			break ;
        }
        std::cout << std::endl;
        if (isdigit(id[0]) && id.length() == 1)
        {	
            i = id[0] - '0';
            if (i >= 1 && i <= 8 && i <= list.size)
            {
                i -= 1;
                std::cout << "Name: " << list.contacts[i].get_first_name() << std::endl;
                std::cout << "Last Name: " << list.contacts[i].get_last_name() << std::endl;
                std::cout << "NickName: " << list.contacts[i].get_nickname() << std::endl;
                std::cout << "Contact Number: " << list.contacts[i].get_phone_number()	<< std::endl;
                std::cout << "Dark Secret: " << list.contacts[i].get_darkest_secret() << std::endl;
                break;
            }
            else
                std::cout << "Contact not found.\n" << std::endl;
        }
        else
            std::cout << "Invalid Contact." << std::endl;
    }
}
