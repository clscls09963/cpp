#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        void attack(const std::string& target);
        void guardGate();

        ScavTrap();
        ScavTrap(string name);
        ScavTrap& operator=(ScavTrap const& copy);
        ScavTrap(ScavTrap const& copy);
        ~ScavTrap();
};