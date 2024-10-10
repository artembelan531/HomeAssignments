/* Belan Artem Vladislavovich
./A2B st135609@student.spbu.ru*/
#include <iostream>
#include <string>
#include <sstream>
#include "header.h"
int main()
    {
        double * stack = new double[100];
        std::string opz;
        std::getline(std::cin,opz);
        std::istringstream all_elements(opz);
        std::string element;
        int top = -1;
        double *top_of_stack = &stack[0];
        while (all_elements>>element)
            {
                if (isdigit(element[0]))
                    {
                        stack[top+1] = std::stod(element);
                        top_of_stack = &stack[top+1];
                        top = top+1;
                    }
                else 
                    {
                        double a = stack[top-1];
                        double b = stack[top];
                        double result = function(a,b,element[0]);
                        stack[top+1] = result;
                        top_of_stack = &stack[top+1];
                        top = top+1;
                    }
            }
        std::cout<<*top_of_stack<<std::endl;
        delete [] stack;
        return 0;
    }
