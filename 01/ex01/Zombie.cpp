#include "Zombie.hpp"

void    Zombie::announce(void)
{
    cout << this->name << ": BraiiiiiiinnnzzzZ..."<< endl;
}

void Zombie::SetZombieName(string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    cout << this->name << " zombie is disappeared." << endl;
}

Zombie::Zombie()
{
    cout << "Create Zombie" << endl;
}