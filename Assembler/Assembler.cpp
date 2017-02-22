#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("usage: ./Assembler xxx.asm\n");
        return -1;
    }

    char *rname = argv[1];
    std::FILE *rfp;
    rfp = std::fopen(rname, "r");

    char *dot = std::strchr(rname, '.');
    *dot = '\0';
    char *wname = std::strcat(rname, ".hack");
    
    std::FILE *wfp;
    wfp = std::fopen(wname, "w");


    std::vector<char> cvec;
    char c;
    size_t n;
    while ((n = std::fread(&c, 1, 1, rfp)) != 0) {
            if (c == '\n')
                continue;
            else cvec.push_back(c);
    }

    for (auto a : cvec)
        std::cout << a << std::endl;

    std::fclose(rfp);
    std::fclose(wfp);
    return 0;
}
