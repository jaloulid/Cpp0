#include "FragTrap.hpp"


int main()
{
    std::cout << "=== ClapTrap Tests ===" << std::endl;
    ClapTrap a("JAAFAR");

    a.attack("TargetA");
    a.takeDamage(4);
    a.beRepaired(3);
    std::cout << "=== ScavTrap Tests ===" << std::endl;
    FragTrap b("NONE");
    b.attack("TargetB");
    b.hightFivesGuys();
    b.takeDamage(50);
    b.beRepaired(20);
    return 0;

}