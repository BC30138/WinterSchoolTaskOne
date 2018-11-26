#include <iostream> 
#include <sstream> 
#include <string>
#include "HashTable.hpp"

int main()
{
    int Base;
    std::string line;
    std::stringstream ss;

    std::getline(std::cin, line);
    ss << line;
    ss >> Base; 
    ss.clear();
    std::getline(std::cin, line);
    ss << line;
    
    HashTable test(Base);
    while (!ss.eof()) {
       int value; 
       ss >> value;
       test.Insert(value);
    } 

    test.preview();

    return 0;
}