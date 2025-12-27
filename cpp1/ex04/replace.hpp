#ifndef REPLACE_HPP
#define REPLACE_HPP


#include <iostream>
#include <string>
#include <fstream>


class Replacefile
{
    private :
        std::string _filename;
        std::string _s1;
        std::string _s2;
    public :
        Replacefile(const std::string& filename, const std::string& s1, const std::string& s2);
        ~Replacefile();
        bool replace();

};


#endif