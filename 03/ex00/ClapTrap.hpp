#include <iostream>
using namespace std;

class ClapTrap
{
    private:
        string name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(string name, int Hit_point, int Energy_point, int Attackdamage);
        ~ClapTrap();
};