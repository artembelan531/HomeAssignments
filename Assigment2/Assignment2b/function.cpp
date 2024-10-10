/* Belan Artem Vladislavovich
./A2B st135609@student.spbu.ru*/
#include <iostream>
double function(double num_1, double num_2, char oper)
    {
        switch (oper)
            {
                case '+':
                    return (num_1 + num_2);
                case '-':
                    return (num_1 - num_2);
                case '*':
                    return (num_1 * num_2);
                case '/':
                    if (num_2 != 0)
                        {
                            return num_1/num_2;
                        }
                    else
                        std::cout<<"You can't divide by zero"<<std::endl;
                default:
                    std::cout<<"Unknown operation"<<std::endl;
                    return 0;
            }
    }
