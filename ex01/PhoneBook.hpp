/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhneBook.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:17:55 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/11/21 13:55:26 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {
private:
    Contact contacts[8];
    int      nextIndex;

public:
    PhoneBook();

    void addContact();
    void searchContact() const;

private:
    std::string formatField(const std::string &str) const;
    void displayContacts() const;
};

#endif
