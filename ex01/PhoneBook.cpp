/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaafar <jaafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:46:14 by jaafar            #+#    #+#             */
/*   Updated: 2025/12/22 19:58:18 by jaafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    total = 0;
}
void PhoneBook::addContact()
{
    Contact c;
    std::string input;

    std::cout << "First Name: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    c.setFirstName(input);

    std::cout << "Last Name: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    c.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    c.setNickname(input);

    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    c.setPhoneNumber(input);

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, input);
    if (input.empty()) return;
    c.setDarkestSecret(input);

    contacts[index] = c;
    index = (index + 1) % 8;

    if (total < 8)
        total++;
}
std::string PhoneBook::formatField(const std::string &str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
void PhoneBook::searchContacts() const
{
    if (total == 0)
    {
        std::cout << "PhoneBook is empty.\n";
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "\n";

    for (int i = 0; i < total; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickname()) << "\n";
    }

    std::string input;
    std::cout << "Enter index: ";
    std::getline(std::cin, input);

    if (input.size() != 1 || input[0] < '0' || input[0] > '7')
        return;

    int idx = input[0] - '0';
    if (idx >= total)
        return;

    std::cout << "First Name: " << contacts[idx].getFirstName() << "\n";
    std::cout << "Last Name: " << contacts[idx].getLastName() << "\n";
    std::cout << "Nickname: " << contacts[idx].getNickname() << "\n";
    std::cout << "Phone Number: " << contacts[idx].getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << contacts[idx].getDarkestSecret() << "\n";
}


