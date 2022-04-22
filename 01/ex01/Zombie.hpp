#include <iostream>
#include <string>
using namespace std;

class Zombie
{
    private:
        string name;
    public:
        void SetZombieName(string name);
        Zombie();
        void announce(void);
        ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);