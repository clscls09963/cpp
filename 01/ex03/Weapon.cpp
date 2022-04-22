#include "Weapon.hpp"

Weapon::Weapon(string str) :type(str)
{

}

Weapon::~Weapon()
{

}

const string    &Weapon::getType()
{
    return this->type;
}

void    Weapon::setType(string str)
{
	this->type = str;
}