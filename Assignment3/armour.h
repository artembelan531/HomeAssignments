/* Belan Artem Vladislavovich
./assignment3 st135609@student.spbu.ru*/
#ifndef ARMOUR_H_INCLUDED
#define ARMOUR_H_INCLUDED

#include <string>

class Armour {
public:
    Armour(const std::string& name);
    ~Armour() = default;

    std::string get_armour_name() const;
    void set_armour_name(const std::string& name);

    unsigned int get_strenght() const;
    void set_strenght(unsigned int strenght);

private:
    std::string armour_name;
    unsigned int strenght;
};

#endif // ARMOUR_H
