/* Belan Artem Vladislavovich
./assignment4 st135609@student.spbu.ru*/
#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Autobot: public Transformer
{
public:
    Autobot();
    Autobot(std::string name);
    Autobot(std::string name,std::string motto);
    Autobot(std::string name,uint age, std::string motto);

    std::string get_motto();
    void set_motto(std::string motto);
    bool get_have_a_matrix_of_leadership();
    void set_have_a_matrix_of_leadership(bool have_a_matrix_of_leadership);

    bool Driving();
private:
    std::string _motto;
    bool _have_a_matrix_of_leadership;
};
std::ostream& operator<<(std::ostream& os,Autobot& autobot);
bool operator<(Autobot& autobot,Autobot& other_autobot);
bool operator>(Autobot& autobot, Autobot& other_autobot);
#endif
