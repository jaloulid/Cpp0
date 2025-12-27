#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie = newZombie("foo");
    heapZombie->announce();
    delete heapZombie;
    randomchump("foo");
}