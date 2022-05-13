#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
    this->name = "Unknown";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout <<"ScavTrap " << name <<  " appeared!!" << std::endl;
}
ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout <<"ScavTrap " << name <<  " appeared!!" << std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
{
    std::cout << "ScavTrap Operator =" << std::endl;
	name = copy.name;
    Hit_points = copy.Hit_points;
	Energy_points = copy.Energy_points;
	Attack_damage = copy.Attack_damage;
	return (*this);
}
ScavTrap::ScavTrap(ScavTrap const& copy)
{
    std::cout << "ScavTrap Copy constructor" << std::endl;
	operator=(copy);
}
ScavTrap::~ScavTrap()
{
    cout << "ScavTrap " << this->name << " disappeared...." << endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!this->Energy_points || !this->Hit_points)
        std::cout << "ScavTrap " << name << "cant't move" << std::endl;
    else
    {
        this->Energy_points--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode!" << std::endl;
}