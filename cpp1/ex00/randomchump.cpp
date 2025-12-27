#include "Zombie.hpp"

void    randomchump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}