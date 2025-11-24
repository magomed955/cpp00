/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:17:57 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/11/21 16:40:43 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : nextIndex(0) {}

std::string PhoneBook::formatField(const std::string &str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

void PhoneBook::displayContacts() const {
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;

    for (int i = 0; i < 8; i++) {
        if (contacts[i].getFirstName().empty())
            continue;

        std::cout << std::setw(10) << (i + 1) << "|"
                  << formatField(contacts[i].getFirstName()) << "|"
                  << formatField(contacts[i].getLastName())  << "|"
                  << formatField(contacts[i].getNickname())  << std::endl;
    }
}

void PhoneBook::addContact() {
    Contact newContact;
    std::string input;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "First name: ";
        std::getline(std::cin, input);
    }
    newContact.setFirstName(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "Last name: ";
        std::getline(std::cin, input);   
    }
    newContact.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);   
    }
    newContact.setNickname(input);

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, input);   
    }
    newContact.setPhoneNumber(input);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, input);   
    }
    newContact.setDarkestSecret(input);

    contacts[nextIndex] = newContact;
    nextIndex = (nextIndex + 1) % 8;

    std::cout << "Contact added!\n";
}

void PhoneBook::searchContact() const {
    displayContacts();

    std::cout << "Enter index (1-8): ";
    std::string input;
    std::getline(std::cin, input);

    if (input.length() != 1 || input[0] < '1' || input[0] > '8') {
        std::cout << "Invalid index!\n";
        return;
    }

    int idx = input[0] - '1';

    if (contacts[idx].getFirstName().empty()) {
        std::cout << "No contact stored at this index.\n";
        return;
    }

    std::cout << "First name: "     << contacts[idx].getFirstName()     << std::endl;
    std::cout << "Last name: "      << contacts[idx].getLastName()      << std::endl;
    std::cout << "Nickname: "       << contacts[idx].getNickname()      << std::endl;
    std::cout << "Phone number: "   << contacts[idx].getPhoneNumber()   << std::endl;
    std::cout << "Darkest secret: " << contacts[idx].getDarkestSecret() << std::endl;
}
