#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const ClapTrap &others)
{
    std::cout << "Copy Constructor is called " << std::endl;
    *this = others;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called " << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << "ClapTrap Constructor for the name " << _name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &others)
{
    if (&others == this)
        return *this;
    std::cout << "Assingments constructor is called" << std::endl;
    _name = others._name;
    hit_points = others.hit_points;
    energy_points = others.energy_points;
    attack_damage = others.attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (energy_points > 0 && hit_points > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
                  << attack_damage << " points of damage! " << std::endl;
        energy_points -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << _name  << " cannot attack! Not enough energy or hit points. " << hit_points << " hit points, he now has 0 hit points " << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << _name << " cannot repair because it's destroyed!" << std::endl;
        return;
    }
    if (energy_points == 0)
    {
        std::cout << "ClapTrap" << _name << "has no energy to repair " << std::endl;
        return;
    }
    unsigned long tmp = hit_points;
    tmp  += amount;
    if (tmp <= __UINT32_MAX__)
        hit_points = tmp;
    else
        hit_points = __UINT32_MAX__;
    energy_points -= 1;
    std::cout << "ClapTrap " << _name << " repairs itself, getting " << amount << " hit points back! " << "now he has hitpoints = " << hit_points << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << _name << " is already destroyed " << std::endl;
        return;
    }
    if (amount >= hit_points)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "ClapTrap " << _name <<  " takes " << amount << " points of damage! " << "now he has hitpoints = " << hit_points << std::endl;
}