#ifndef Zombie_HPP
#define Zombie_HPP

#include <string>
#include <iostream>


class Zombie
{
    private :
            std::string _name;
    public :
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomchump(std::string name);


#endif