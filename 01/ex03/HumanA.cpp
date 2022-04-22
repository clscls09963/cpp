#include "HumanA.hpp"

HumanA::HumanA(string str, Weapon &weapon) : name(str), weapon(weapon)
{

}
HumanA::~HumanA()
{
}

void HumanA:: attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

void HumanA:: setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}