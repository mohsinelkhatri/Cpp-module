/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:27:09 by melkhatr          #+#    #+#             */
/*   Updated: 2025/12/09 14:55:57 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), nextIndex(0) {}

void PhoneBook::addContact() 
{
    Contact newContact;
    if (!newContact.setcontact()) {
        return;
    }
    if(newContact.isEmpty()) {
        std::cout << "Contact not added. All fields are required." << std::endl;
        return;
    }
    else {
        contacts[nextIndex] = newContact;
        if (count < 8) {
            count++;
        }
        nextIndex = (nextIndex + 1) % 8;
        std::cout << "Contact added successfully." << std::endl;
    }
}

void PhoneBook::searchContacts() const 
{
    if (count == 0) 
    {
        std::cout << "PhoneBook is empty. No contacts to display." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    for (int i = 0; i < count; ++i)
    {
        contacts[i].displayShort(i);
    }

    while (true) 
    {
        std::cout << "Enter the index of the contact to view details: ";
        std::string input;
        if (!std::getline(std::cin, input)) {
            return;
        }
        if (!isdigit(input[0])) {
            std::cout << "Invalid index. Please Retry" << std::endl;
            continue;
        }
        
        int index = input[0] - '0';
        if (index < 0 || index >= count) {
            std::cout << "Invalid index. Please Retry" << std::endl;
            continue;
        }
        contacts[index].displayFull();
        break;
    }
}