/* Belan Artem Vladislavovich
./assignment3 st135609@student.spbu.ru*/
#include "Autobot.h"

Autobot::Autobot(std::string name,uint age,std::string motto) : Transformer(name, age),_motto(motto), _have_a_matrix_of_leadership(true) {}

std::string Autobot::get_motto()
{
    return _motto;
}
void Autobot::set_motto(std::string motto)
{
    _motto = motto;
}
bool Autobot::get_have_a_matrix_of_leadership()
{
    return _have_a_matrix_of_leadership;
}
void Autobot::set_have_a_matrix_of_leadership(bool have_a_matrix_of_leadership)
{
    _have_a_matrix_of_leadership = have_a_matrix_of_leadership;
}

bool Autobot::Driving()
{
    return true;
}
