#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("player A");
    ClapTrap B("player B");

    for (int i = 0; i < 5; i++)
	{
		A.attack("player B");
		B.takeDamage(A.get_attack_damage());
	}
	for (int i = 0; i < 5; i++)
	{
		A.beRepaired(5);
	}
}
