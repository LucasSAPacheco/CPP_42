#include "PhoneBook.hpp"

void	name(Contact& contact)
{
	std::string name;

	std::cout << "Insert your name: ";
	std::getline(std::cin, name);
	if (std::cin.eof() || std::cin.fail()) {
		std::cin.clear();
		name.clear();
		exit(1);
	}
	while (name.empty())
	{	
		std::cout << "Please, insert your name: ";
		std::getline(std::cin, name);
	}
	contact.set_first_name(name);
}

void	last_name(Contact& contact)
{
	std::string	lastname;

	std::cout << "Insert your Last Name: ";
	std::getline(std::cin, lastname);
	if (std::cin.eof() || std::cin.fail()) {
		std::cin.clear();
		lastname.clear();
		exit(1);
	}
	while (lastname.empty())
	{
		std::cout << "Please, insert your last name: ";
		std::getline(std::cin, lastname);
	}
	contact.set_last_name(lastname);
}

void	nickname(Contact& contact)
{
	std::string	nickname;

	std::cout << "Insert your Nickname: ";
	std::getline(std::cin, nickname);
	if (std::cin.eof() || std::cin.fail()) {
		std::cin.clear();
		nickname.clear();
		exit(1);
	}
	while (nickname.empty())
	{
		std::cout << "Please, insert your nickname: ";
		std::getline(std::cin, nickname);
	}
	contact.set_nickname(nickname);
}

void	phone_number(Contact& contact)
{
	std::string	phonenumber;
    int i = 0;

	std::cout << "Insert your Phone Number: ";
	std::getline(std::cin, phonenumber);
	if (std::cin.eof() || std::cin.fail()) {
		std::cin.clear();
		phonenumber.clear();
		exit(1);
	}
    if (phonenumber[0] == '+')
        i++;
    while (phonenumber[i] != '\0')
    {
        if ((phonenumber[i] < '0' || phonenumber[i] > '9') 
         && phonenumber[i] != ' ' && phonenumber[i] != '-' 
         && phonenumber[i] != '(' && phonenumber[i] != ')')
        {
            std::cout << "Please, insert like: +55 11 99999-9999 " << RABA;
            std::getline(std::cin, phonenumber);
            i = 0;
            if (phonenumber[0] == '+')
                i++;
        }
        i++;
    }
	while (phonenumber.empty())
	{
		std::cout << "Please, insert your phone number: ";
		std::getline(std::cin, phonenumber);
	}
	contact.set_phone_number(phonenumber);
}

void	dark_secret(Contact& contact)
{
	std::string	darksecret;

	std::cout << "Insert your Dark Secret: ";
	std::getline(std::cin, darksecret);
	if (std::cin.eof() || std::cin.fail()) {
		std::cin.clear();
		darksecret.clear();
		exit(1);
	}
	while (darksecret.empty())
	{
		std::cout << "Please, insert your Dark Secret: ";
		std::getline(std::cin, darksecret);
	}
	contact.set_darkest_secret(darksecret);	
}