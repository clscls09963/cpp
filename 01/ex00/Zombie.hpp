#include <iostream>
#include <string>
using namespace std;

class Zombie
{
    private:
        string name;
    public:
        Zombie(string name);
        void announce(void);
        ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);