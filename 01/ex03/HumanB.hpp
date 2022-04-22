#ifndef _HUMANB_H_
# define _HUMANB_H_

#include "Weapon.hpp"
using namespace std;

class HumanB
{
    private:
        string name;
        Weapon *weapon;
    public:
        void attack();
        HumanB(string str);
        void    setWeapon(Weapon &wep);
        ~HumanB();
};

#endif