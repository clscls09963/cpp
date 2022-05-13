#include "FlagTrap.hpp"

void FlagTrap::highFivesGuys(void)
{
    std::cout << "FlagTrap " << this->name << " highFivesGuys!" << std::endl;
}

FlagTrap::FlagTrap() : ClapTrap()
{
    this->name = "Unknown";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout <<"FlagTrap " << name <<  " appeared!!" << std::endl;
}

FlagTrap::FlagTrap(string name) : ClapTrap(name)
{
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout <<"ScavTrap " << name <<  " appeared!!" << std::endl;
}

FlagTrap& FlagTrap::operator=(FlagTrap const& copy)
{
    std::cout << "FlagTrap Operator =" << std::endl;
	name = copy.name;
    Hit_points = copy.Hit_points;
	Energy_points = copy.Energy_points;
	Attack_damage = copy.Attack_damage;
	return (*this);
}

FlagTrap::FlagTrap(FlagTrap const& copy)
{
    std::cout << "FlagTrap Copy constructor" << std::endl;
	operator=(copy);
}

FlagTrap::~FlagTrap()
{
    cout << "FlagTrap " << this->name << " disappeared...." << endl;
}
