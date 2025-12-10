/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:27:02 by melkhatr          #+#    #+#             */
/*   Updated: 2025/12/09 14:55:24 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact() {}

bool Contact::setcontact() {
    std::cout << "Enter First Name: ";
    if (!std::getline(std::cin, firstName)) {
        return false;
    }
    while (firstName.empty()) {
        std::cout << "First Name cannot be empty.\nEnter First Name: ";
        if (!std::getline(std::cin, firstName)) {
            return false;
        }
    }
    std::cout << "Enter Last Name: ";
    if (!std::getline(std::cin, lastName)) {
        return false;
    }
    while (lastName.empty()) {
        std::cout << "Last Name cannot be empty.\nEnter Last Name: ";
        if (!std::getline(std::cin, lastName)) {
            return false;
        }
    }
    std::cout << "Enter Nickname: ";
    if(!std::getline(std::cin, nickName)) {
        return false;
    }
    while (nickName.empty()) {
        std::cout << "Nickname cannot be empty.\nEnter Nickname: ";
        if(!std::getline(std::cin, nickName)) {
            return false;
        }
    }
    std::cout << "Enter Phone Number: ";
    if(!std::getline(std::cin, phoneNumber)) {
        return false;
    }
    while (phoneNumber.empty()) {
        std::cout << "Phone Number cannot be empty.\nEnter Phone Number: ";
        if(!std::getline(std::cin, phoneNumber)) {
            return false;
        }
    }
    std::cout << "Enter Darkest Secret: ";
    if(!std::getline(std::cin, darkestSecret)) {
        return false;
    }
    while (darkestSecret.empty()) {
        std::cout << "Darkest Secret cannot be empty\nEnter Darkest Secret: ";
        if(!std::getline(std::cin, darkestSecret)) {
            return false;
        }
    }
    return true;
}
bool Contact::isEmpty() const {
    return firstName.empty() && lastName.empty() && nickName.empty() &&
           phoneNumber.empty() && darkestSecret.empty();
}
void Contact::displayFull() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
static std::string formatField(const std::string& field) {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    else
        return field;
}
void Contact::displayShort(int index) const {
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << formatField(firstName) << "|";
    std::cout << std::setw(10) << formatField(lastName) << "|";
    std::cout << std::setw(10) << formatField(nickName) << std::endl;
}