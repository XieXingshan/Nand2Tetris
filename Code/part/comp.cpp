#include <string>
#include <iostream>

std::string comp(const std::string &c)
{
    if (c == "0")        return "0101010";
    else if (c == "1")   return "0111111"; 
    else if (c == "-1")  return "0111010"; 
    else if (c == "D")   return "0001100"; 
    else if (c == "A")   return "0110000"; 
    else if (c == "!D")  return "0001101"; 
    else if (c == "!A")  return "0110001"; 
    else if (c == "-D")  return "0001111"; 
    else if (c == "-A")  return "0110011"; 
    else if (c == "D+1") return "0011111"; 
    else if (c == "A+1") return "0110111"; 
    else if (c == "D-1") return "0001110"; 
    else if (c == "A-1") return "0110010"; 
    else if (c == "D+A") return "0000010"; 
    else if (c == "D-A") return "0010011"; 
    else if (c == "A-D") return "0000111"; 
    else if (c == "D&A") return "0000000"; 
    else if (c == "D|A") return "0010101"; 

    else if (c =="M")    return "1110000";
    else if (c =="!M")   return "1110001";
    else if (c == "-M")  return "1110011";
    else if (c =="M+1")  return "1110111";
    else if (c =="M-1")  return "1110010";
    else if (c =="D+M")  return "1000010";
    else if (c =="D-M")  return "1010011";
    else if (c =="M-D")  return "1000111";
    else if (c =="D&M")  return "1000000";
    else if (c =="D|M")  return "1010101";
    else return "comp error";
}

int main()
{
    std::string b = comp("D&M");
    std::cout << b << std::endl;
    return 0;
}
