#ifndef	WRONGCAT_HPP
#define	WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        virtual ~WrongCat();
        WrongCat& operator=(WrongCat const& copy);
        WrongCat(WrongCat const& copy);
        virtual void makeSound() const; 
};

#endif