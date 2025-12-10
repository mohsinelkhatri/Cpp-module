/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:29:47 by melkhatr          #+#    #+#             */
/*   Updated: 2025/12/09 15:08:05 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the PhoneBook application!" << std::endl;

    while (true) 
    {
        std::cout << "Enter command ADD, SEARCH, EXIT : ";
         if(!std::getline(std::cin, command)) {
            std::cout << "\nExiting PhoneBook." << std::endl;
            break;
         }

        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
        } else if (command == "EXIT") {
            std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }
    return 0;
}