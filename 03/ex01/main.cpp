#include "ScavTrap.hpp"

int main()
{
    ScavTrap A("player A");
    ScavTrap B("player B");

    for (int i = 0; i < 5; i++)
	{
		A.attack("player B");
		B.takeDamage(A.get_attack_damage());
	}
	B.guardGate();
	for (int i = 0; i < 5; i++)
	{
		A.beRepaired(5);
	}

}
