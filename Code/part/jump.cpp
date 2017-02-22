#include <string>
#include <iostream>

std::string jump(const std::string &j)
{
    if (j == "null")      return "000";
    else if (j == "JGT")  return "001";
    else if (j == "JEQ")  return "010";
    else if (j == "JGE")  return "011";
    else if (j == "JLT")  return "100";
    else if (j == "JNE")  return "101";
    else if (j == "JLE")  return "110";
    else if (j == "JMP")  return "111";
    else return "jump error";
}

int main()
{
    std::string b = jump("JNE");
    std::cout << b << std::endl;
    return 0;
}
