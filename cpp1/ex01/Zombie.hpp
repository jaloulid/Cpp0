#ifndef Zombie_HPP
#define Zombie_HPP

#include <string>
#include <iostream>


class Zombie
{
    private :
            std::string _name;
    public :
    Zombie();
    ~Zombie();
    void    announce(void);
    void    setname(std::string name);
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );



#endif