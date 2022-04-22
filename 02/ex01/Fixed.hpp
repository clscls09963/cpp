#include <iostream>
using namespace std;

class Fixed
{
    private:
        int					value;
		static const int	bits;
    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
        Fixed();
        Fixed(const Fixed& src);
        Fixed(int val);
        Fixed(float val);
        Fixed & operator=(Fixed const &src);
        int toInt( void ) const;
        float toFloat( void ) const;
};