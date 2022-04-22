#include "Zombie.hpp"

int main()
{
    Zombie stack = Zombie("stack");
    Zombie *heap = newZombie("heap");

    stack.announce();
    heap->announce();

    randomChump("ramdom chump");
    
    delete heap;
}