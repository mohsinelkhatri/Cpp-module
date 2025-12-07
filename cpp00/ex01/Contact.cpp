/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:27:02 by melkhatr          #+#    #+#             */
/*   Updated: 2025/12/03 12:48:25 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void Contact::setcontact() {
    std::cout << "Enter First Name: ";
    std::getline(std::cin, firstName);
    while (firstName.empty()) {
        std::cout << "First Name cannot be empty.\nEnter First Name: ";
        std::getline(std::cin, firstName);
    }
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lastName);
    while (lastName.empty()) {
        std::cout << "Last Name cannot be empty.\nEnter Last Name: ";
        std::getline(std::cin, lastName);
    }
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nickName);
    while (nickName.empty()) {
        std::cout << "Nickname cannot be empty.\nEnter Nickname: ";
        std::getline(std::cin, nickName);
    }
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, phoneNumber);
    while (phoneNumber.empty() || phoneNumber.length() > 10) {
        if (phoneNumber.length() > 10){
            std::cout << "Phone Number must be at least 10 digits..\nEnter Phone Number:";
            std::getline(std::cin, phoneNumber);
        }
        std::cout << "Phone Number cannot be empty.\nEnter Phone Number: ";
        std::getline(std::cin, phoneNumber);
    }
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
    while (darkestSecret.empty()) {
        std::cout << "Darkest Secret cannot be empty\nEnter Darkest Secret: ";
        std::getline(std::cin, darkestSecret);
    }
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
