#include "FlagTrap.hpp"

int main()
{
    FlagTrap A("player A");
    FlagTrap B("player B");

    for (int i = 0; i < 5; i++)
	{
		A.attack("player B");
		B.takeDamage(A.get_attack_damage());
	}
	B.highFivesGuys();
	for (int i = 0; i < 5; i++)
	{
		A.beRepaired(5);
	}

}
