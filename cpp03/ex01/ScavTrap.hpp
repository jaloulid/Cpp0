#pragma once

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& cpy);
        ScavTrap& operator=(const ScavTrap& cpy);
        ~ScavTrap();
        
        void    guardGate();
};
