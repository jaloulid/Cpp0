#include "Weapon.hpp"


Weapon::Weapon(const std::string& type){
    this->type = type;
}
const std::string& Weapon::getType(){
    return type;
}

void    Weapon::setType(const std::string& newtype)
{
    type = newtype;
}