/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:29:47 by melkhatr          #+#    #+#             */
/*   Updated: 2025/12/04 14:39:02 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the PhoneBook application!" << std::endl;

    while (true) 
    {
        std::cout << "Enter command 1- ADD, 2- SEARCH, 3- EXIT : ";
        std::getline(std::cin, command);

        if (command == "ADD" || command == "add" || command == "1") {
            phoneBook.addContact();
        } else if (command == "SEARCH" || command == "search"  || command == "2") {
            phoneBook.searchContacts();
        } else if (command == "EXIT" || command == "exit" || command == "3") {
            std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }
    return 0;
}