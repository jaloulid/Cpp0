#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "[DEBUG] I love having extra bacon for"
                "my 7XL-double-cheese-triple-pickle-specialketchup burger."
                " I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money."
                "You didn’t put enough bacon in my burger!"
                "If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning()
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free"
                    "I’ve been coming for years whereas you started working here since last month."
                << std::endl;
}
void Harl::error()
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*functions[4])() = {
        &Harl::debug, // take adress of debug function in {Harl class} and store it in functions[0]
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
    std::string names_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (names_level[i] == level)
        {
            (this->*functions[i])();
            return;

        }
    }
    std::cout << "[INVALID] no messages for " << level << std::endl;
}