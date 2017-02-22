#ifndef ASSEMBLER_H
#define ASSEMBLER_H

#include <string>


class Parser {
    public:
        Parse();

        bool hasMoreCommands();
        void advance();
        int commandType();
        std::string& symbol();
        std::string& dest();
        std::string& comp();
        std::string& jump();
    private:
};

class Code {
    public:
        std::string& dest(std::string&);
        std::string& comp(std::string&);
        std::string& jump(std::string&);
};

class SymbolTable {
    public:
        SybolTable();

        void addEntry(std::string&, int);
        bool contains(std::string&);
        int GetAddress(std::string&);
    private:
        std::map<std::string, int> stmap;
};

void SymbolTable::addEntry(std::string &s, int addr)
{
    stmap.insert({s, addr});
}

bool SymbolTable::contains(std::string &s)
{
    if (stmap.find(s) != stmap.end())
        return true;
    else return false;
}

int SymbolTalbe::GetAddress(std::string &s)
{
    if ( (auto iter = stmap.find(s)) != stmap.end())
        return *iter;
    else std::cout << "No address!" << std::endl;
}

#endif
