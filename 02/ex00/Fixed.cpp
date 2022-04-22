#include "Fixed.hpp"

const int	Fixed::bits = 8;

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destrutor called" << std::endl;
}

Fixed::Fixed()
{
    this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
	value = src.getRawBits();
	return (*this);
}