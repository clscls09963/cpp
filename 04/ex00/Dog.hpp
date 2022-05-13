#ifndef	DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();
        Dog& operator=(Dog const& copy);
        Dog(Dog const& copy);
       virtual void makeSound() const; 
};

#endif