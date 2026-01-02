#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor for " << _name << " is called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "Copy Constructor is called" << std::endl;
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
    std::cout << "Assingments constructor is called" << std::endl;
    if (&cpy == this)
        return *this;
    this->_name = cpy._name;
    this->hit_points = cpy.hit_points;
    this->energy_points = cpy.energy_points;
    this->attack_damage = cpy.attack_damage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " Destructor is called " << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode. " << std::endl;
}