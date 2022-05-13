#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
    public:
        void highFivesGuys(void);

        FlagTrap();
        FlagTrap(string name);
        FlagTrap& operator=(FlagTrap const& copy);
        FlagTrap(FlagTrap const& copy);
        ~FlagTrap();
};