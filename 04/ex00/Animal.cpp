#include "Animal.hpp"

void Animal::makeSound() const
{
    std::cout << "Animal!" << std::endl;
}
std::string Animal::getType() const
{
    return type;
}
void Animal::setType(std::string type)
{
    this->type = type;
} 

Animal::Animal()
{
    std::cout << "Animal: default constructor" << std::endl;
    type = "Animal";
}
Animal::~Animal()
{
    std::cout << "Animal: delete" << std::endl;
}
Animal& Animal::operator=(Animal const& copy)
{
    std::cout << "Animal: copy constructor" << std::endl;
    type = copy.type;
    return *(this);
}
Animal::Animal(Animal const& copy)
{
    std::cout << "Animal: copy assignment operator" << std::endl;
    operator=(copy);
}