#include "Harl.hpp"


int id_level(std::string &name){
    if (name == "DEBUG")
        return 0;
    else if (name == "INFO")
        return 1;
    else if (name == "WARNING")
        return 2;
    else if (name == "ERROR")
        return 3;
    else
        return -1;
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "usage " << av[0] << " level" <<  std::endl;
        return 1;
    }
    else
    {
        Harl harl;
        std::string levels[4] = {"DEBUG", "INFO" , "WARNING", "ERROR"};
        std::string level = av[1];
        int id = id_level(level);
        switch(id)
        {
            case 0:
                harl.complain("DEBUG");
            case 1:
                harl.complain("INFO");
            case 2:
                harl.complain("WARNING");
            case 3:
                harl.complain("ERROR");
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;
        }
    }
    return 0;
}