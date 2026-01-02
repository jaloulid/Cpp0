#pragma once

#include <iostream>

class ClapTrap
{
    protected :
        std::string _name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
    public :
        ClapTrap(const ClapTrap& others);
        ClapTrap(std::string name);
        ClapTrap& operator=(const ClapTrap& others);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        ~ClapTrap();
        

};
