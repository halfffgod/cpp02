#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &a){
        fixed_nb = a.getRawBits();
    }
    return(*this);
}

int Fixed::getRawBits(void)const{
    // std::cout << "getRawBits member function called" << std::endl;
    return(this->fixed_nb);
}

void Fixed::setRawBits(int const raw){
    this->fixed_nb = raw;
}

Fixed::Fixed(const Fixed &a){
    std::cout << "Copy constructor called" << std::endl;
    *this = (a);
}

Fixed::Fixed(const int number): fixed_nb(number << frac_bits){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num): fixed_nb(roundf(num * (1 << frac_bits))){
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void)const{
    return ((float)fixed_nb / (1 << frac_bits));
}

int Fixed::toInt(void) const{
    return (fixed_nb / (1 << frac_bits));
}

std::ostream &operator <<(std::ostream &out, const Fixed&objs){
    out << objs.toFloat();
    return (out);
}