#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int 				fixed_nb;
	static const int	frac_bits = 8;
public:
	Fixed();
	Fixed(const int nb);
	Fixed(const float num);
	Fixed(const Fixed &a);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed & operator = (const Fixed &a);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif