#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

    private: 
        int fixed_nb;
        static const int frac_bits = 8;

    public:
        Fixed();
        Fixed(const int number);
        Fixed(const Fixed& a);
        Fixed(const float num);
        ~Fixed();
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed   &operator=(const Fixed& a);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

};
    std::ostream &operator <<(std::ostream&out , const Fixed&objs);

#endif