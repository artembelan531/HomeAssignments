/* Belan Artem Vladislavovich
./assignment3 st135609@student.spbu.ru*/
#include "weapon.h"

Weapon::Weapon(std::string name) : _weapon_name(name), _weapon_number_patrons(25) {}

std::string Weapon::get_weapon_name() const
{
    return _weapon_name;
}

void Weapon::set_weapon_name(const std::string &name)
{
    _weapon_name = name;
}

uint Weapon::get_weapon_number_patrons() const
{
    return _weapon_number_patrons;
}

void Weapon::set_weapon_number_patrons(uint number_patrons)
{
    _weapon_number_patrons = number_patrons;
}
