/* Belan Artem Vladislavovich
./assignment3 st135609@student.spbu.ru*/
#include "armour.h"

Armour::Armour(const std::string& name) : armour_name(name), strenght(100) {}

std::string Armour::get_armour_name() const {
    return armour_name;
}

void Armour::set_armour_name(const std::string& name) {
    armour_name = name;
}

unsigned int Armour::get_strenght() const {
    return strenght;
}

void Armour::set_strenght(unsigned int strenght) {
    this->strenght = strenght;
}
