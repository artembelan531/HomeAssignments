/* Belan Artem Vladislavovich
./assignment3 st135609@student.spbu.ru*/
#include "minicon.h"

Minicon::Minicon(std::string name,uint age) : Transformer(name, age),_energy(300), _hight(200) {}

uint Minicon::get_energy()
{
    return _energy;
}
void Minicon::set_energy(uint energy)
{
    _energy = energy;
}
uint Minicon::get_hight()
{
    return _hight;
}
void Minicon::set_hight(uint hight)
{
    _hight = hight;
}

bool Minicon::Running()
{
    return true;
}
