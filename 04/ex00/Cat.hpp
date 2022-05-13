#ifndef	CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        Cat& operator=(Cat const& copy);
        Cat(Cat const& copy);
        virtual void makeSound() const; 
};

#endif