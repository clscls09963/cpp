#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog: default constructor" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog: delete" << std::endl;
}
Dog& Dog::operator=(Dog const& copy)
{
    std::cout << "Dog: copy constructor" << std::endl;
    type = copy.type;
    return *(this);
}
Dog::Dog(Dog const& copy)
{
    std::cout << "Dog: copy assignment operator" << std::endl;
    operator=(copy);
}
void Dog::makeSound() const
{
    std::cout << "Dog!" << std::endl;
}