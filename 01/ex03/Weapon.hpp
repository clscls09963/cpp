#ifndef _WEAPON_H_
# define _WEAPON_H_

#include <iostream>
#include <string>
using namespace std;

class Weapon
{
    private:
        string type;
    public:
        Weapon(string str);
        ~Weapon();
        const string &getType();
        void    setType(string str);
};

#endif