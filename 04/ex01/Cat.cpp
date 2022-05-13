#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat: default constructor" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat: delete" << std::endl;
}
Cat& Cat::operator=(Cat const& copy)
{
    std::cout << "Cat: copy constructor" << std::endl;
    type = copy.type;
    return *(this);
}
Cat::Cat(Cat const& copy)
{
    std::cout << "Cat: copy assignment operator" << std::endl;
    operator=(copy);
}
void Cat::makeSound() const
{
    std::cout << "Cat!" << std::endl;
}