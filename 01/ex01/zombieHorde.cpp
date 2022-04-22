#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie_horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        string s = name;
        s += "[";
        s += to_string(i);
        s += "]";
        zombie_horde[i].SetZombieName(s);
    }
    return zombie_horde;
}
