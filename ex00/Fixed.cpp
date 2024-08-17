#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_nb = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &a){
        fixed_nb = a.getRawBits();
    }
    return(*this);
}

int Fixed::getRawBits()const
{
	std::cout << "getRawBits member function called " << std::endl;
	return(this->fixed_nb);
}
void Fixed::setRawBits(int const raw)
{
	this->fixed_nb = raw;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = (a);
}
