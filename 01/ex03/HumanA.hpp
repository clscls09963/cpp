#ifndef _HUMANA_H_
# define _HUMANA_H_

#include "Weapon.hpp"
using namespace std;

class HumanA
{
    private:
        string name;
        Weapon  &weapon;
    public:
        HumanA(string str, Weapon &wep);
        ~HumanA();
        void attack();
        void setWeapon(Weapon &weapon);
};

#endif