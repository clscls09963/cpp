#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

ClapTrap::ClapTrap(string name, int Hit_point, int Energy_point, int Attackdamage)
{
    this->Hit_points = Hit_point;
    this->Energy_points = Energy_point;
    this->Attack_damage = Attackdamage;
    cout << "ClapTrap <" << this->name << "> appeared!!" << endl;
}

ClapTrap::~ClapTrap()
{
    cout << "ClapTrap <" << this->name << "> disappeared...." << endl;
}