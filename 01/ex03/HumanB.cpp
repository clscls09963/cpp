#include "HumanB.hpp"

HumanB::HumanB(string str) : name(str)
{

}
HumanB::~HumanB()
{
}

void HumanB:: attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB:: setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}