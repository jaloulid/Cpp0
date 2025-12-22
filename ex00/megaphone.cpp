/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaafar <jaafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:43:42 by jaafar            #+#    #+#             */
/*   Updated: 2025/12/20 15:43:44 by jaafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for(int i = 1; i < ac; i++)
    {
        for(int j = 0; av[i][j]; j++)
        {
            std::cout << (char)std::toupper(av[i][j]);
        }
    }

    std::cout << std::endl;
    return 0;
}