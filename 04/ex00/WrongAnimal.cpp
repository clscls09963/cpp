#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal!" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return type;
}
void WrongAnimal::setType(std::string type)
{
    this->type = type;
} 

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: default constructor" << std::endl;
    type = "WrongAnimal";
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: delete" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& copy)
{
    std::cout << "WrongAnimal: copy constructor" << std::endl;
    type = copy.type;
    return *(this);
}
WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
    std::cout << "WrongAnimal: copy assignment operator" << std::endl;
    operator=(copy);
}