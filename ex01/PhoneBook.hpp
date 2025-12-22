/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaafar <jaafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:46:20 by jaafar            #+#    #+#             */
/*   Updated: 2025/12/22 19:31:52 by jaafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int index;
    int total;

    std::string formatField(const std::string &str) const;

public:
    PhoneBook();

    void addContact();
    void searchContacts() const;
};

#endif
