/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaafar <jaafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:46:06 by jaafar            #+#    #+#             */
/*   Updated: 2025/12/22 19:58:33 by jaafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook pb;
    std::string cmd;

    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD")
            pb.addContact();
        else if (cmd == "SEARCH")
            pb.searchContacts();
        else if (cmd == "EXIT")
            break;
    }
    return 0;
}
