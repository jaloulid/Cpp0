#include "Zombie.hpp"

int main()
{
    int zombiescount = 2;
    Zombie *zombies;
    zombies = zombieHorde(zombiescount, "Zombies");
    for (int i = 0; i < zombiescount; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
    
}