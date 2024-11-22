/* Belan Artem Vladislavovich
./assignment4 st135609@student.spbu.ru*/
#include "gtest/gtest.h"
#include "Autobot.h"
TEST(Autobot, Transformer3)
{
    Autobot autobot("Bumblebee",100,"...");
    EXPECT_EQ(autobot.get_name(),"Bumblebee");
    EXPECT_EQ(autobot.get_motto(),"...");
}
TEST(Autobot, get_motto)
{
    Autobot autobot("Bumblebee",100,"...");
    EXPECT_EQ(autobot.get_motto(),"...");
}
TEST(Autobot, get_have_a_matrix_of_leadership)
{
    Autobot autobot("Bumblebee",100,"...");
    EXPECT_EQ(autobot.get_have_a_matrix_of_leadership(),true);
}
TEST(Autobot, set_motto)
{
    Autobot autobot("Bumblebee",100,"...");
    EXPECT_EQ(autobot.get_motto(),"...");
    autobot.set_motto("Here we go again!");
    EXPECT_EQ(autobot.get_motto(),"Here we go again");
}
TEST(Autobot, set_have_a_matrix_of_leadership)
{
    Autobot autobot("Bumblebee",100,"...");
    EXPECT_EQ(autobot.get_have_a_matrix_of_leadership(),true);
    autobot.set_have_a_matrix_of_leadership(false);
    EXPECT_EQ(autobot.get_have_a_matrix_of_leadership(),false);
}
TEST(Autobot, Driving)
{
    Autobot autobot("Bumblebee",100,"...");
    EXPECT_EQ(autobot.Driving(), true);
}
TEST(Autobot, Outputformat)
{
    Autobot autobot("Bumblebee",100,"...");
    std::ostringstream osser;
    osser<<autobot;
    EXPECT_EQ(osser.str(),"Bumblebee",100,"...");
}
TEST(Autobot, AgeComparison)
{
    Autobot autobot("Bumblebee",100,"...");
    Autobot other_autobot("Optimus Prime",101,"Here we go again!");
    EXPECT_TRUE(autobot > other_autobot);
    EXPECT_TRUE(other_autobot < autobot);
}
