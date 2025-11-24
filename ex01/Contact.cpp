/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:17:43 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/11/21 16:25:10 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void Contact::setFirstName(const std::string &str) { _firstName = str; }
void Contact::setLastName(const std::string &str) { _lastName = str; }
void Contact::setNickname(const std::string &str) { _nickname = str; }
void Contact::setPhoneNumber(const std::string &str) { _phoneNumber = str; }
void Contact::setDarkestSecret(const std::string &str) { _darkestSecret = str; }

std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getLastName() const { return _lastName; }
std::string Contact::getNickname() const { return _nickname; }
std::string Contact::getPhoneNumber() const { return _phoneNumber; }
std::string Contact::getDarkestSecret() const { return _darkestSecret; }
