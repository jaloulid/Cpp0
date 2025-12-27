#include "HumanB.hpp"
HumanB::HumanB(const std::string &name): _name(name),_weapon(NULL){}
HumanB::HumanB(const std::string& name, Weapon& weapon):_name(name), _weapon(&weapon){}
void HumanB::attack(){
    if (_weapon != NULL)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " attacks with their " << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}