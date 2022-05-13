#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type); 
        Animal();
        virtual ~Animal();
        Animal& operator=(Animal const& copy);
        Animal(Animal const& copy);
};

#endif