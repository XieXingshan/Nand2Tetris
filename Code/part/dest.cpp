#include <string>
#include <iostream>

std::string dest(const std::string &d)
{
        if (d == "null")     return "000";
        else if (d == "M")   return "001";
        else if (d == "D")   return "010";
        else if (d == "MD")  return "011";
        else if (d == "A")   return "100";
        else if (d == "AM")  return "101";
        else if (d == "AD")  return "110";
        else if (d == "AMD") return "111";
        else return "dest error";
}

int main()
{
    std::string b = dest("D");
    std::cout << b << std::endl;
    return 0;
}
