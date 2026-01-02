
#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor for " << _name << " is called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "Copy Constructor is called" << std::endl;
    *this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " Destructor is called " << std::endl;
}

void FragTrap::hightFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " is in mode high five. " << std::endl;
}