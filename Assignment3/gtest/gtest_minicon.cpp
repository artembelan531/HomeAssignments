/* Belan Artem Vladislavovich
./assignment3 st135609@student.spbu.ru*/
#include "gtest/gtest.h"
#include "minicon.h"

TEST(Minicon, get_energy) 
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_energy(),300);
}
TEST(Minicon, get_hight) 
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_hight(),200);
}
TEST(Minicon, set_energy) 
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_energy(),300);
    minicon.set_energy(400);
    EXPECT_EQ(minicon.get_energy(),400);
}
TEST(Minicon, set_hight) 
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.get_hight(),200);
    minicon.set_hight(180);
    EXPECT_EQ(minicon.get_hight(),180);
}
TEST(Minicon, Running) 
{
    Minicon minicon("Overrun",60);
    EXPECT_EQ(minicon.Running(), true);
}
