#include <string>
#include <iostream>

class Parser {
    public:
        Parser() = default;
    
        bool hasMoreCommands();
        void advance();
        void commandType();
        std::string symbol();
        std::string dest();
        std::string comp();
        std::string jump();
};
