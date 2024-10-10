/* Belan Artem Vladislavovich
./A2A st135609@student.spbu.ru*/
#include <iostream>
#include <fstream>
#include <filesystem>
#include "stak.h"
int main()
{   
    std::ifstream infile;
    infile.open("new.txt",std::ios::binary|std::ios::in);
    if(!infile.is_open())
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
    int amounts_char = std::filesystem::file_size("new.txt");
    char * massive = new char[amounts_char];
    infile.read(massive,amounts_char);
    reverse(massive,amounts_char);
    std::ofstream outfile;
    outfile.open("old.txt",std::ios::binary|std::ios::out);
    if(!outfile.is_open())
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
    outfile.write(massive,amounts_char);
    delete [] massive;
    infile.close();
    outfile.close();
    return 0;
}
