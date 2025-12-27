#include "replace.hpp"

Replacefile::Replacefile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    this->_filename = filename;
    this->_s1 = s1;
    this->_s2 = s2;
}

Replacefile::~Replacefile(){}

bool Replacefile::replace()
{
    if(_s1.empty() || _s2.empty())
    {
        std::cerr << "Error : s1 or s2 cannot be empty" << std::endl;
        return false;

    }
    std::ifstream inFile(_filename.c_str());
    if(!inFile.is_open())
    {
        std::cout << "cannot open file : " << _filename << std::endl;
        return false;
    }
    std::string outFilename = _filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if(!outFile.is_open())
    {
        std::cout << "cannot create a file : " << _filename << std::endl;
        return false;
    }
    std::string line;
    while(std::getline(inFile, line))
    {
        size_t position = 0;
        while((position = line.find(_s1, position)) != std::string::npos)
        {
            line = line.substr(0, position) + _s2 + line.substr(position + _s1.length());
            position += _s1.length();
        }
        outFile << line;
        if (!inFile.eof()) 
        {
            outFile << '\n';
        }
    }
    inFile.close();
    outFile.close();
    return true;
}
