#ifndef	WRONGANIMAL_HPP
#define	WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        void makeSound() const;
        std::string getType() const;
        void setType(std::string type); 
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const& copy);
        WrongAnimal(WrongAnimal const& copy);
};

#endif