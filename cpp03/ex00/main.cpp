#include "ClapTrap.hpp"

int main()
{

    ClapTrap a("NONE");
    ClapTrap b("JAAFAR");

    a.attack("ROBOTS");
    a.takeDamage(5);
    a.takeDamage(10);
    a.beRepaired(5);
    a.beRepaired(5);
    a.attack("OTHER ROBOTS");
    b.beRepaired(3);
    b.beRepaired(3);
    return (0);
}