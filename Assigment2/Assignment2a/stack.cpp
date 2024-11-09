/* Belan Artem Vladislavovich
./A2A st135609@student.spbu.ru*/
#include <iostream>
#include <fstream>
#include <filesystem>
#include "reverse.h"
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
    char * array = new char[amounts_char];
    infile.read(array,amounts_char);
    reverse(array,amounts_char);
    std::ofstream outfile;
    outfile.open("old.txt",std::ios::binary|std::ios::out);
    if(!outfile.is_open())
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
    outfile.write(array,amounts_char);
    delete [] array;
    infile.close();
    outfile.close();
    return 0;
}
