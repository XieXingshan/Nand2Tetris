#include <string>
#include <map>
#include <iostream>

class SymbolTable {
    public:
        SymbolTable() = default;
        SymbolTable(const SymbolTable&) = delete;
        SymbolTable& operator=(const SymbolTable&) = delete;
        // add (symbol, address) to map
        void addEntry(const std::string&, int);
        // check if map contains symbol
        bool contains(const std::string&);
        // get symbol address
        int GetAddress(const std::string&);
    private:
        std::map<std::string, int> stmap;
};

void SymbolTable::addEntry(const std::string &s, int addr)
{
    stmap.insert({s, addr});
}

bool SymbolTable::contains(const std::string &s)
{
    if (stmap.find(s) != stmap.end())
        return true;
    else return false;
}

int SymbolTable::GetAddress(const std::string &s)
{
    return stmap.find(s)->second;
}

int main()
{
    SymbolTable st;
    st.addEntry("i", 16);
    st.addEntry("sum", 17);
    st.addEntry("good", 18);
    std::string s = "sum";
    if (st.contains(s))
        std::cout << st.GetAddress(s) << std::endl;
    else std::cout << s << ": no address" << std::endl;
    return 0;
}
