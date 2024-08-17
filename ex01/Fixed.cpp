#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	//nb = nb/256;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	//nb = nb/256;
}

// Fixed& Fixed::operator=(const Fixed& a)
// {
//     std::cout << "Copy assignment operator called " << std::endl;
//     return(*this);
// }

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = (a);
}

