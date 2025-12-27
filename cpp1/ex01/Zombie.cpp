#include "Zombie.hpp"

Zombie::Zombie(void) : _name (""){}
void    Zombie::setname(std::string name)
{
   this->_name = name;
}
void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie()
{
    std::cout << _name << " : is destroyed" << std::endl;
}
