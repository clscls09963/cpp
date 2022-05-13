#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if (!Energy_points || !Hit_points)
        std::cout << "ClapTrap " << name << " cant't move" << std::endl;
    else
    {
        Energy_points--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points <= amount)
    {
        Hit_points = 0;
        std::cout << "ClapTrap " << name << " is die" << std::endl;
    }
    else
    {
        Hit_points -= amount;
        std::cout << "ClapTrap " << name << " take Damage " << amount << " , remaning hp is " << Hit_points << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!Energy_points || !Hit_points)
		std::cout << "Clap Trap " << name << " can't move!!" <<std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " was repaired by " << amount << " of hit points!!" << std::endl;
	    Hit_points += amount;
		Energy_points--;
	}
}

int ClapTrap::get_attack_damage()
{
    return Attack_damage;
}

ClapTrap::ClapTrap(string name)
{
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    this->name = name;
    cout << "ClapTrap " << this->name << " appeared!!" << endl;
}

ClapTrap::ClapTrap()
{
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    name = "Unknown";
    cout << "ClapTrap " << this->name << " appeared!!" << endl;
}

ClapTrap::~ClapTrap()
{
    cout << "ClapTrap " << this->name << " disappeared...." << endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	std::cout << "ClapTrap Copy constructor" << std::endl;
	operator=(copy);
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& copy)
{
    std::cout << "ClapTrap Operator =" << std::endl;
	name = copy.name;
    Hit_points = copy.Hit_points;
	Energy_points = copy.Energy_points;
	Attack_damage = copy.Attack_damage;
	return (*this);
}