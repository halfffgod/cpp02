#include "Fixed.hpp"

Fixed::Fixed(): fixed_nb(0){
    std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) : fixed_nb(num * 256){
    std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float nb){
    std::cout << "float constructor called" << std::endl;
    this->fixed_nb = (roundf(nb * (1  << frac_bits)));
}

Fixed::Fixed(const Fixed &objs): fixed_nb(objs.fixed_nb){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& ob){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ob)
        fixed_nb = ob.fixed_nb;
    return (*this);
}

float Fixed::toFloat(void)const{
    return ((float)fixed_nb / (1 << 8));
}

int Fixed::toInt(void) const{
    return (fixed_nb / 256);
}

std::ostream &operator <<(std::ostream &out, const Fixed&objs){
    out << objs.toFloat();
    return (out);
}

bool Fixed::operator!=(const Fixed &ob)const{
    return (fixed_nb != ob.fixed_nb);
}

bool Fixed::operator>(const Fixed &ob)const{
    return (fixed_nb > ob.fixed_nb);
}

bool Fixed::operator>=(const Fixed &ob)const{
    return (fixed_nb >= ob.fixed_nb);
}

bool Fixed::operator<(const Fixed &ob)const{
    return (fixed_nb < ob.fixed_nb);
}

bool Fixed::operator<=(const Fixed &ob)const{
    return (fixed_nb <= ob.fixed_nb);
}

bool Fixed::operator==(const Fixed &ob)const{
    return (fixed_nb == ob.fixed_nb);
}

Fixed Fixed::operator+(const Fixed &ob) const{
    return (Fixed(this->toFloat() + ob.toFloat()));
}

Fixed Fixed::operator-(const Fixed &ob) const{
    return (Fixed(this->toFloat() - ob.toFloat()));
}

Fixed Fixed::operator*(const Fixed &ob) const{
    return (Fixed(this->toFloat() * ob.toFloat()));
}

Fixed Fixed::operator/(const Fixed &ob) const{
    return (Fixed(this->toFloat() / ob.toFloat()));
}

Fixed &Fixed::operator++(){
    this->fixed_nb++;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    this->fixed_nb++;
    return (tmp);
}

Fixed &Fixed::operator--(){
    this->fixed_nb--;
    return(*this);
}

Fixed Fixed::operator--(int){
    Fixed tmp(*this);
    this->fixed_nb--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    return (a > b ? b : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    return (a > b ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    return (a > b ? a : b);
}
