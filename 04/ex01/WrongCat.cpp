#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat: default constructor" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat: delete" << std::endl;
}
WrongCat& WrongCat::operator=(WrongCat const& copy)
{
    std::cout << "WrongCat: copy constructor" << std::endl;
    type = copy.type;
    return *(this);
}
WrongCat::WrongCat(WrongCat const& copy)
{
    std::cout << "WrongCat: copy assignment operator" << std::endl;
    operator=(copy);
}
void WrongCat::makeSound() const
{
    std::cout << "WrongCat!" << std::endl;
}