#include <iostream>
using namespace std;

class ClapTrap
{
    protected:
        string name;
        unsigned int Hit_points;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int get_attack_damage();
        ClapTrap();
        ClapTrap(string name);
        ClapTrap& operator=(ClapTrap const& copy);
        ClapTrap(ClapTrap const& copy);
        ~ClapTrap();
};