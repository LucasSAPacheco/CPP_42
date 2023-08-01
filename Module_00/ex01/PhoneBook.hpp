#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include "Defines.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact;

class PhoneBook{
    public:
        PhoneBook();
        ~PhoneBook();

        Contact contacts[8];
        int     oldest;
        int     size;
};

void	menu( int option );
void	name(Contact& contact);
void	last_name(Contact& contact);
void	nickname(Contact& contact);
void	phone_number(Contact& contact);
void	dark_secret(Contact& contact);
void    add_screen(PhoneBook& phone_book);
void	truncated(std::string InfoContact);
void	search(PhoneBook &list);
void	search_screen(PhoneBook &list);

#endif