#include "replace.hpp"


int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "invalid arguments" << std::endl;
        return 1;
    }
   Replacefile replacer(av[1], av[2], av[3]);
   if(!replacer.replace())
    return 1;
   return 0;

}